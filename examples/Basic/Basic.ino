// Basic CANApi example: polls an MPPT once a second, handles the driver controls message, and prints every frame.
//
// The library's own .cpp files must find this sketch's UseMsgList.hpp, which the Arduino IDE cannot arrange for an
// installed library. Either build with the sketch folder on the include path, e.g.
//   arduino-cli compile --fqbn arduino:avr:mega --library <CANApi> \
//     --build-property "compiler.cpp.extra_flags=-I<this folder>" examples/Basic
// or (as the Telemetry2021 firmware does) put CANApi in the sketch as a submodule at src/CANApi/ and include
// "src/CANApi/src/CANHelper.hpp" instead. See README.md.
#include <CANHelper.hpp>

CANHelper::CANHandler canHandler(10, CAN_125KBPS);  // MCP2515 chip select pin, bus speed: check these for your board

void setup() {
	Serial.begin(115200);
}

void loop() {
	canHandler.read();  // polls the MCP2515; if a frame has arrived, calls processMessage() and processAll()

	static unsigned long lastPoll = 0;
	if (millis() - lastPoll >= 1000) {
		lastPoll = millis();
		// Sending: fill a buffer through the message's struct, set its CAN ID and DLC, send
		CANHelper::CANHelperBuffer poll;
		poll.payloadBuffer.as_Telemetry_MpptPollJaved.Blank = 0;
		canHandler.setCanMeta(poll, CAN_META_Telemetry_MpptPollJaved);
		canHandler.send(poll);
	}
}

// Receiving: one definition for each message whose read bit is set in UseMsgList.hpp
void CANHelper::CanMsgHandler::processMessage(CANHelper::Messages::DriverControls::SpeedValCurrVal& msg) {
	Serial.print("Set speed ");
	Serial.print(msg.DriverSetSpeed);
	Serial.print(", set current ");
	Serial.println(msg.DriverSetCurrent);
}

// Every received frame, recognised or not, because PROCESS_ALL_MSG is defined. msg.raw is the can_frame
void CANHelper::CanMsgHandler::processAll(CANHelper::CANHelperBuffer& msg) {
	Serial.print("Frame 0x");
	Serial.print(msg.raw.can_id, HEX);
	Serial.print(":");
	for (int i = 0; i < msg.raw.can_dlc; i++) {
		Serial.print(" ");
		Serial.print(msg.raw.data[i], HEX);
	}
	Serial.println();
}
