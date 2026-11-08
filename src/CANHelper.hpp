#ifndef CANHelper_INCLUDE_GUARD
#define CANHelper_INCLUDE_GUARD

// Which messages to compile in: a list of USE_MSG_ macros (see README.md, "Choosing messages").
// The first of these that exists is used:
//  1. the file named by CANAPI_CONFIG_FILE, e.g. -DCANAPI_CONFIG_FILE='"MyMsgList.hpp"'
//  2. UseMsgList.hpp on the include path, e.g. -I<sketch folder> (PlatformIO build_flags, arduino-cli --build-property)
//  3. UseMsgList.hpp in the sketch folder, when this repository is a submodule at <sketch>/src/CANApi/
#if defined(CANAPI_CONFIG_FILE)
#include CANAPI_CONFIG_FILE
#elif defined(__has_include)
#if __has_include("UseMsgList.hpp")
#include "UseMsgList.hpp"
#elif __has_include("../../../UseMsgList.hpp")
#include "../../../UseMsgList.hpp"
#else
#error "CANApi: UseMsgList.hpp not found. Put it in the sketch folder, add its folder to the include path, or define CANAPI_CONFIG_FILE (see README.md)"
#endif
#else
#include "../../../UseMsgList.hpp"
#endif

#include "generated/CanApi.hpp"

// The latest received frame, its ID, its DLC and its payload union (CastedCANPayload).
// NOTE: these only work inside member functions of CanMsgHandler and CANHandler (which extends it),
// including processMessage() and processAll()
#define LATEST_MSG_ID this->messageRead.raw.can_id
#define LATEST_MSG_DLC this->messageRead.raw.can_dlc
#define LATEST_MSG_DATA this->messageRead.payloadBuffer
#define LATEST_MSG this->messageRead

namespace CANHelper {
	struct canMeta { //CAN ID and DLC for a buffer to be sent, e.g. CAN_META_Telemetry_TimeAndFix
		canid_t can_id;
		__u8 can_dlc;
	};

	class CANHandler : public CanMsgHandler {
	private:
		MCP2515 mcp2515;
	protected:
		void DispatchMsg(); //calls processMessage() for the frame in messageRead, then processAll(). Defined in generated/CanApi.cpp
	public:
		CANHandler(int CSPin, CAN_SPEED canSpeed); //MCP2515 chip select pin and bus speed (assumes an 8 MHz crystal)
		void read(); //call in loop(): polls the MCP2515 and dispatches the frame if one has arrived
		void testRead(can_frame& testFrame); //dispatches testFrame as if it had been received (for testing without a CAN bus)
		void send(CANHelperBuffer& toSend);
		void send(can_frame& toSend);
		void setCanMeta(CANHelperBuffer& buffer, canMeta meta);
		void reverseBytes(CANHelperBuffer& buffer); //reverses all can_dlc data bytes (whole payload, not per field)
	};
}
#endif
