#include "CANHelper.hpp"

namespace CANHelper
{
    CANHandler::CANHandler(int CSPin, CAN_SPEED canSpeed) : mcp2515(CSPin) { //initialiser list to pass specified CSPin to MCP2515 class
        this->mcp2515.setBitrate(canSpeed, MCP_8MHZ); //Sets the CAN bus speed given (e.g. CAN_125KBPS), for an MCP2515 with an 8 MHz crystal
        this->mcp2515.setNormalMode();
    }
    
    //void CanMsgHandler::DispatchMsg(can_frame msg) //handled in generated file

    void CANHandler::read() {
        if (this->mcp2515.readMessage(&(this->messageRead.raw)) == MCP2515::ERROR_OK) { //To receive data (Poll Read). If true, message was received //https://how2electronics.com/interfacing-mcp2515-can-bus-module-with-arduino/
            this->DispatchMsg();
        }
    }

    void CANHandler::testRead(can_frame& testFrame) {
        memcpy(&(this->messageRead.raw), &testFrame, sizeof(can_frame));
        this->DispatchMsg();
    }
    
    void CANHandler::send(CANHelperBuffer& toSend) {
        this->mcp2515.sendMessage(&(toSend.raw));
    }

    void CANHandler::send(can_frame& toSend) {
        this->mcp2515.sendMessage(&toSend);
    }

    void CANHandler::setCanMeta(CANHelperBuffer& buffer, canMeta meta) {
        buffer.raw.can_id = meta.can_id;
        buffer.raw.can_dlc = meta.can_dlc;
    }

    //Reverses the order of all can_dlc data bytes. Not used by the generated code: big-endian messages
    //have more than one field, so DispatchMsg() swaps the bytes of each field separately instead
    void CANHandler::reverseBytes(CANHelperBuffer& buffer) {
        __u8 last = buffer.raw.can_dlc - 1;
        for (__u8 i = 0; i < buffer.raw.can_dlc / 2; i++) {
            __u8 temp = buffer.raw.data[i];
            buffer.raw.data[i] = buffer.raw.data[last - i];
            buffer.raw.data[last - i] = temp;
        }
    }
}