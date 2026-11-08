// Which CAN messages the Basic example compiles in. 2-bit values: MSB = read (handle when received), LSB = write
#define USE_MSG_Telemetry_MpptPollJaved 0b01         // sent by this sketch
#define USE_MSG_DriverControls_SpeedValCurrVal 0b10  // received: needs a processMessage() definition
#define PROCESS_ALL_MSG                              // processAll() is called for every received frame
