#ifndef CanApiv04_INCLUDE_GUARD
#define CanApiv04_INCLUDE_GUARD
#include "CANHelper.hpp"
namespace CANHelper::Messages
{
#ifdef USE_MSG_Telemetry_TimeAndFix
#define CAN_ID_Telemetry_TimeAndFix 0x0F6
#define CAN_DLC_Telemetry_TimeAndFix 8
	namespace Telemetry
	{
		struct _TimeAndFix : public Messages::CANMsg {
			struct canData {
				uint8_t GpsHour;
				uint8_t GpsMinute;
				uint8_t GpsSeconds;
				uint8_t GpsDay;
				uint8_t GpsMonth;
				uint8_t GpsYear;
				uint8_t GpsFix;
				uint8_t GpsFixquality;
			} __attribute__((aligned(8)));
			canData data;
			_TimeAndFix() : CANMsg(CAN_ID_Telemetry_TimeAndFix, CAN_DLC_Telemetry_TimeAndFix) { }
		};
	}
	void processMessage(Telemetry::_TimeAndFix& msg);
#endif
#ifdef USE_MSG_Telemetry_SpeedAndAngle
#define CAN_ID_Telemetry_SpeedAndAngle 0x0F7
#define CAN_DLC_Telemetry_SpeedAndAngle 8
	namespace Telemetry
	{
		struct _SpeedAndAngle : public Messages::CANMsg {
			struct canData {
				float GpsSpeed;
				float GpsAngle;
			} __attribute__((aligned(8)));
			canData data;
			_SpeedAndAngle() : CANMsg(CAN_ID_Telemetry_SpeedAndAngle, CAN_DLC_Telemetry_SpeedAndAngle) { }
		};
	}
	void processMessage(Telemetry::_SpeedAndAngle& msg);
#endif
#ifdef USE_MSG_Telemetry_Latitude
#define CAN_ID_Telemetry_Latitude 0x0F8
#define CAN_DLC_Telemetry_Latitude 5
	namespace Telemetry
	{
		struct _Latitude : public Messages::CANMsg {
			struct canData {
				float GpsLatitude;
				char GpsLat;
			} __attribute__((aligned(8)));
			canData data;
			_Latitude() : CANMsg(CAN_ID_Telemetry_Latitude, CAN_DLC_Telemetry_Latitude) { }
		};
	}
	void processMessage(Telemetry::_Latitude& msg);
#endif
#ifdef USE_MSG_Telemetry_Longitude
#define CAN_ID_Telemetry_Longitude 0x0F9
#define CAN_DLC_Telemetry_Longitude 5
	namespace Telemetry
	{
		struct _Longitude : public Messages::CANMsg {
			struct canData {
				float GpsLongitude;
				char GpsLon;
			} __attribute__((aligned(8)));
			canData data;
			_Longitude() : CANMsg(CAN_ID_Telemetry_Longitude, CAN_DLC_Telemetry_Longitude) { }
		};
	}
	void processMessage(Telemetry::_Longitude& msg);
#endif
#ifdef USE_MSG_Telemetry_AltitudeAndSatellites
#define CAN_ID_Telemetry_AltitudeAndSatellites 0x0FA
#define CAN_DLC_Telemetry_AltitudeAndSatellites 5
	namespace Telemetry
	{
		struct _AltitudeAndSatellites : public Messages::CANMsg {
			struct canData {
				float GpsAltitude;
				uint8_t GpsSatellites;
			} __attribute__((aligned(8)));
			canData data;
			_AltitudeAndSatellites() : CANMsg(CAN_ID_Telemetry_AltitudeAndSatellites, CAN_DLC_Telemetry_AltitudeAndSatellites) { }
		};
	}
	void processMessage(Telemetry::_AltitudeAndSatellites& msg);
#endif
#ifdef USE_MSG_Telemetry_SystemStatusMessages
#define CAN_ID_Telemetry_SystemStatusMessages 0x111
#define CAN_DLC_Telemetry_SystemStatusMessages 8
	namespace Telemetry
	{
		struct _SystemStatusMessages : public Messages::CANMsg {
			struct canData {
				uint8_t Power;
				uint8_t WritingToSd;
				uint8_t GpsTimeObtained;
				uint8_t LoadedConfig;
				uint8_t Flag;
				uint8_t Spare1;
				uint8_t Spare2;
				uint8_t Spare3;
			} __attribute__((aligned(8)));
			canData data;
			_SystemStatusMessages() : CANMsg(CAN_ID_Telemetry_SystemStatusMessages, CAN_DLC_Telemetry_SystemStatusMessages) { }
		};
	}
	void processMessage(Telemetry::_SystemStatusMessages& msg);
#endif
#ifdef USE_MSG_Testbed_TestbedEnvirocanIno
#define CAN_ID_Testbed_TestbedEnvirocanIno 0x1B1
#define CAN_DLC_Testbed_TestbedEnvirocanIno 8
	namespace Testbed
	{
		struct _TestbedEnvirocanIno : public Messages::CANMsg {
			struct canData {
				float TempDegC;
				float Humidity;
			} __attribute__((aligned(8)));
			canData data;
			_TestbedEnvirocanIno() : CANMsg(CAN_ID_Testbed_TestbedEnvirocanIno, CAN_DLC_Testbed_TestbedEnvirocanIno) { }
		};
	}
	void processMessage(Testbed::_TestbedEnvirocanIno& msg);
#endif
#ifdef USE_MSG_Testbed_TestbedEnvirocanIno
#define CAN_ID_Testbed_TestbedEnvirocanIno 0x1B2
#define CAN_DLC_Testbed_TestbedEnvirocanIno 8
	namespace Testbed
	{
		struct _TestbedEnvirocanIno : public Messages::CANMsg {
			struct canData {
				float HeatIndexDegC;
				int32_t LdrReading;
			} __attribute__((aligned(8)));
			canData data;
			_TestbedEnvirocanIno() : CANMsg(CAN_ID_Testbed_TestbedEnvirocanIno, CAN_DLC_Testbed_TestbedEnvirocanIno) { }
		};
	}
	void processMessage(Testbed::_TestbedEnvirocanIno& msg);
#endif
#ifdef USE_MSG_DriverControls_SpeedValCurrVal
#define CAN_ID_DriverControls_SpeedValCurrVal 0x501
#define CAN_DLC_DriverControls_SpeedValCurrVal 8
	namespace DriverControls
	{
		struct _SpeedValCurrVal : public Messages::CANMsg {
			struct canData {
				float DriverSetSpeed;
				float DriverSetCurrent;
			} __attribute__((aligned(8)));
			canData data;
			_SpeedValCurrVal() : CANMsg(CAN_ID_DriverControls_SpeedValCurrVal, CAN_DLC_DriverControls_SpeedValCurrVal) { }
		};
	}
	void processMessage(DriverControls::_SpeedValCurrVal& msg);
#endif
#ifdef USE_MSG_DriverControls_Maxbuscurrent
#define CAN_ID_DriverControls_Maxbuscurrent 0x502
#define CAN_DLC_DriverControls_Maxbuscurrent 8
	namespace DriverControls
	{
		struct _Maxbuscurrent : public Messages::CANMsg {
			struct canData {
				float Zero;
				float MaxBusCurrent;
			} __attribute__((aligned(8)));
			canData data;
			_Maxbuscurrent() : CANMsg(CAN_ID_DriverControls_Maxbuscurrent, CAN_DLC_DriverControls_Maxbuscurrent) { }
		};
	}
	void processMessage(DriverControls::_Maxbuscurrent& msg);
#endif
#ifdef USE_MSG_Tritium_IdentificationInfo
#define CAN_ID_Tritium_IdentificationInfo 0x600
#define CAN_DLC_Tritium_IdentificationInfo 8
	namespace Tritium
	{
		struct _IdentificationInfo : public Messages::CANMsg {
			struct canData {
				uint32_t TritiumId;
				uint32_t SerialNumber;
			} __attribute__((aligned(8)));
			canData data;
			_IdentificationInfo() : CANMsg(CAN_ID_Tritium_IdentificationInfo, CAN_DLC_Tritium_IdentificationInfo) { }
		};
	}
	void processMessage(Tritium::_IdentificationInfo& msg);
#endif
#ifdef USE_MSG_Tritium_StausInformation
#define CAN_ID_Tritium_StausInformation 0x601
#define CAN_DLC_Tritium_StausInformation 8
	namespace Tritium
	{
		struct _StausInformation : public Messages::CANMsg {
			struct canData {
				uint16_t LimitFlags;
				uint16_t ErrorFlags;
				uint16_t ActiveMotor;
				uint8_t TransmitErrorCount;
				uint8_t ReceiveErrorCount;
			} __attribute__((aligned(8)));
			canData data;
			_StausInformation() : CANMsg(CAN_ID_Tritium_StausInformation, CAN_DLC_Tritium_StausInformation) { }
		};
	}
	void processMessage(Tritium::_StausInformation& msg);
#endif
#ifdef USE_MSG_Tritium_BusMeasurement
#define CAN_ID_Tritium_BusMeasurement 0x602
#define CAN_DLC_Tritium_BusMeasurement 8
	namespace Tritium
	{
		struct _BusMeasurement : public Messages::CANMsg {
			struct canData {
				float BusVoltage;
				float BusCurrent;
			} __attribute__((aligned(8)));
			canData data;
			_BusMeasurement() : CANMsg(CAN_ID_Tritium_BusMeasurement, CAN_DLC_Tritium_BusMeasurement) { }
		};
	}
	void processMessage(Tritium::_BusMeasurement& msg);
#endif
#ifdef USE_MSG_Tritium_Velocity
#define CAN_ID_Tritium_Velocity 0x603
#define CAN_DLC_Tritium_Velocity 8
	namespace Tritium
	{
		struct _Velocity : public Messages::CANMsg {
			struct canData {
				float MotorVelocity;
				float VehicleVelocity;
			} __attribute__((aligned(8)));
			canData data;
			_Velocity() : CANMsg(CAN_ID_Tritium_Velocity, CAN_DLC_Tritium_Velocity) { }
		};
	}
	void processMessage(Tritium::_Velocity& msg);
#endif
#ifdef USE_MSG_Tritium_PhaseCurrent
#define CAN_ID_Tritium_PhaseCurrent 0x604
#define CAN_DLC_Tritium_PhaseCurrent 8
	namespace Tritium
	{
		struct _PhaseCurrent : public Messages::CANMsg {
			struct canData {
				float PhaseBCurrent;
				float PhaseCCurrent;
			} __attribute__((aligned(8)));
			canData data;
			_PhaseCurrent() : CANMsg(CAN_ID_Tritium_PhaseCurrent, CAN_DLC_Tritium_PhaseCurrent) { }
		};
	}
	void processMessage(Tritium::_PhaseCurrent& msg);
#endif
#ifdef USE_MSG_Tritium_MotorVoltageVector
#define CAN_ID_Tritium_MotorVoltageVector 0x605
#define CAN_DLC_Tritium_MotorVoltageVector 8
	namespace Tritium
	{
		struct _MotorVoltageVector : public Messages::CANMsg {
			struct canData {
				float VectVoltImag;
				float VectVoltReal;
			} __attribute__((aligned(8)));
			canData data;
			_MotorVoltageVector() : CANMsg(CAN_ID_Tritium_MotorVoltageVector, CAN_DLC_Tritium_MotorVoltageVector) { }
		};
	}
	void processMessage(Tritium::_MotorVoltageVector& msg);
#endif
#ifdef USE_MSG_Tritium_MotorCurrentVector
#define CAN_ID_Tritium_MotorCurrentVector 0x606
#define CAN_DLC_Tritium_MotorCurrentVector 8
	namespace Tritium
	{
		struct _MotorCurrentVector : public Messages::CANMsg {
			struct canData {
				float VectCurrImag;
				float VectCurrReal;
			} __attribute__((aligned(8)));
			canData data;
			_MotorCurrentVector() : CANMsg(CAN_ID_Tritium_MotorCurrentVector, CAN_DLC_Tritium_MotorCurrentVector) { }
		};
	}
	void processMessage(Tritium::_MotorCurrentVector& msg);
#endif
#ifdef USE_MSG_Tritium_MotorBackemfVector
#define CAN_ID_Tritium_MotorBackemfVector 0x607
#define CAN_DLC_Tritium_MotorBackemfVector 8
	namespace Tritium
	{
		struct _MotorBackemfVector : public Messages::CANMsg {
			struct canData {
				float PeakBackEmfPhaseToNeutral;
				float BackEmfD;
			} __attribute__((aligned(8)));
			canData data;
			_MotorBackemfVector() : CANMsg(CAN_ID_Tritium_MotorBackemfVector, CAN_DLC_Tritium_MotorBackemfVector) { }
		};
	}
	void processMessage(Tritium::_MotorBackemfVector& msg);
#endif
#ifdef USE_MSG_Tritium_Rail_15V
#define CAN_ID_Tritium_Rail_15V 0x608
#define CAN_DLC_Tritium_Rail_15V 8
	namespace Tritium
	{
		struct _Rail_15V : public Messages::CANMsg {
			struct canData {
				float Reserved;
				float FifteenVSupply;
			} __attribute__((aligned(8)));
			canData data;
			_Rail_15V() : CANMsg(CAN_ID_Tritium_Rail_15V, CAN_DLC_Tritium_Rail_15V) { }
		};
	}
	void processMessage(Tritium::_Rail_15V& msg);
#endif
#ifdef USE_MSG_Tritium_Rail_3_3VAnd1_9V
#define CAN_ID_Tritium_Rail_3_3VAnd1_9V 0x609
#define CAN_DLC_Tritium_Rail_3_3VAnd1_9V 8
	namespace Tritium
	{
		struct _Rail_3_3VAnd1_9V : public Messages::CANMsg {
			struct canData {
				float OneNineVSupply;
				float ThreeThreeVSupply;
			} __attribute__((aligned(8)));
			canData data;
			_Rail_3_3VAnd1_9V() : CANMsg(CAN_ID_Tritium_Rail_3_3VAnd1_9V, CAN_DLC_Tritium_Rail_3_3VAnd1_9V) { }
		};
	}
	void processMessage(Tritium::_Rail_3_3VAnd1_9V& msg);
#endif
#ifdef USE_MSG_Tritium_Reserved
#define CAN_ID_Tritium_Reserved 0x60A
#define CAN_DLC_Tritium_Reserved 8
	namespace Tritium
	{
		struct _Reserved : public Messages::CANMsg {
			struct canData {
				float Reserved;
				float Reserved;
			} __attribute__((aligned(8)));
			canData data;
			_Reserved() : CANMsg(CAN_ID_Tritium_Reserved, CAN_DLC_Tritium_Reserved) { }
		};
	}
	void processMessage(Tritium::_Reserved& msg);
#endif
#ifdef USE_MSG_Tritium_SinkMotorTemperature
#define CAN_ID_Tritium_SinkMotorTemperature 0x60B
#define CAN_DLC_Tritium_SinkMotorTemperature 8
	namespace Tritium
	{
		struct _SinkMotorTemperature : public Messages::CANMsg {
			struct canData {
				float MotorTemp;
				float HeatSinkTemp;
			} __attribute__((aligned(8)));
			canData data;
			_SinkMotorTemperature() : CANMsg(CAN_ID_Tritium_SinkMotorTemperature, CAN_DLC_Tritium_SinkMotorTemperature) { }
		};
	}
	void processMessage(Tritium::_SinkMotorTemperature& msg);
#endif
#ifdef USE_MSG_Tritium_DspBoardTemperature
#define CAN_ID_Tritium_DspBoardTemperature 0x60C
#define CAN_DLC_Tritium_DspBoardTemperature 8
	namespace Tritium
	{
		struct _DspBoardTemperature : public Messages::CANMsg {
			struct canData {
				float DspBoardTemp;
				float Reserved;
			} __attribute__((aligned(8)));
			canData data;
			_DspBoardTemperature() : CANMsg(CAN_ID_Tritium_DspBoardTemperature, CAN_DLC_Tritium_DspBoardTemperature) { }
		};
	}
	void processMessage(Tritium::_DspBoardTemperature& msg);
#endif
#ifdef USE_MSG_Tritium_Reserved
#define CAN_ID_Tritium_Reserved 0x60D
#define CAN_DLC_Tritium_Reserved 8
	namespace Tritium
	{
		struct _Reserved : public Messages::CANMsg {
			struct canData {
				float Reserved;
				float Reserved;
			} __attribute__((aligned(8)));
			canData data;
			_Reserved() : CANMsg(CAN_ID_Tritium_Reserved, CAN_DLC_Tritium_Reserved) { }
		};
	}
	void processMessage(Tritium::_Reserved& msg);
#endif
#ifdef USE_MSG_Tritium_OdoBusAmphours
#define CAN_ID_Tritium_OdoBusAmphours 0x60E
#define CAN_DLC_Tritium_OdoBusAmphours 8
	namespace Tritium
	{
		struct _OdoBusAmphours : public Messages::CANMsg {
			struct canData {
				float Odometer;
				float DcBusAmpHours;
			} __attribute__((aligned(8)));
			canData data;
			_OdoBusAmphours() : CANMsg(CAN_ID_Tritium_OdoBusAmphours, CAN_DLC_Tritium_OdoBusAmphours) { }
		};
	}
	void processMessage(Tritium::_OdoBusAmphours& msg);
#endif
#ifdef USE_MSG_Tritium_SlipSpeedMeasurement
#define CAN_ID_Tritium_SlipSpeedMeasurement 0x617
#define CAN_DLC_Tritium_SlipSpeedMeasurement 8
	namespace Tritium
	{
		struct _SlipSpeedMeasurement : public Messages::CANMsg {
			struct canData {
				float Reserved;
				float SlipSpeed;
			} __attribute__((aligned(8)));
			canData data;
			_SlipSpeedMeasurement() : CANMsg(CAN_ID_Tritium_SlipSpeedMeasurement, CAN_DLC_Tritium_SlipSpeedMeasurement) { }
		};
	}
	void processMessage(Tritium::_SlipSpeedMeasurement& msg);
#endif
#ifdef USE_MSG_Orion_CellVoltages
#define CAN_ID_Orion_CellVoltages 0x6B0
#define CAN_DLC_Orion_CellVoltages 7
	namespace Orion
	{
		struct _CellVoltages : public Messages::CANMsg {
			struct canData {
				uint16_t PackCurrent;
				uint16_t PackInstVoltage;
				uint8_t PackSoc;
				uint16_t RelayState;
			} __attribute__((aligned(8)));
			canData data;
			_CellVoltages() : CANMsg(CAN_ID_Orion_CellVoltages, CAN_DLC_Orion_CellVoltages) { }
		};
	}
	void processMessage(Orion::_CellVoltages& msg);
#endif
#ifdef USE_MSG_Orion_CellTempsDischargeChageCurrentLimit
#define CAN_ID_Orion_CellTempsDischargeChageCurrentLimit 0x6B1
#define CAN_DLC_Orion_CellTempsDischargeChageCurrentLimit 7
	namespace Orion
	{
		struct _CellTempsDischargeChageCurrentLimit : public Messages::CANMsg {
			struct canData {
				int16_t PackDcl;
				int16_t Unknown;
				int8_t HighTemperatureSensor;
				int8_t LowTemperatureSensors;
				int8_t Blank;
			} __attribute__((aligned(8)));
			canData data;
			_CellTempsDischargeChageCurrentLimit() : CANMsg(CAN_ID_Orion_CellTempsDischargeChageCurrentLimit, CAN_DLC_Orion_CellTempsDischargeChageCurrentLimit) { }
		};
	}
	void processMessage(Orion::_CellTempsDischargeChageCurrentLimit& msg);
#endif
#ifdef USE_MSG_Orion_CellVoltages
#define CAN_ID_Orion_CellVoltages 0x700
#define CAN_DLC_Orion_CellVoltages 7
	namespace Orion
	{
		struct _CellVoltages : public Messages::CANMsg {
			struct canData {
				uint16_t PackCurrent;
				uint16_t PackInstVoltage;
				uint8_t PackSoc;
				uint16_t RelayState;
			} __attribute__((aligned(8)));
			canData data;
			_CellVoltages() : CANMsg(CAN_ID_Orion_CellVoltages, CAN_DLC_Orion_CellVoltages) { }
		};
	}
	void processMessage(Orion::_CellVoltages& msg);
#endif
#ifdef USE_MSG_Orion_CellTempsDischargeChageCurrentLimit
#define CAN_ID_Orion_CellTempsDischargeChageCurrentLimit 0x701
#define CAN_DLC_Orion_CellTempsDischargeChageCurrentLimit 7
	namespace Orion
	{
		struct _CellTempsDischargeChageCurrentLimit : public Messages::CANMsg {
			struct canData {
				int16_t PackDcl;
				int16_t Unknown;
				int8_t HighTemperatureSensor;
				int8_t LowTemperatureSensors;
				int8_t Blank;
			} __attribute__((aligned(8)));
			canData data;
			_CellTempsDischargeChageCurrentLimit() : CANMsg(CAN_ID_Orion_CellTempsDischargeChageCurrentLimit, CAN_DLC_Orion_CellTempsDischargeChageCurrentLimit) { }
		};
	}
	void processMessage(Orion::_CellTempsDischargeChageCurrentLimit& msg);
#endif
#ifdef USE_MSG_Orion_CellTempsDischargeChageCurrentLimit
#define CAN_ID_Orion_CellTempsDischargeChageCurrentLimit 0x702
#define CAN_DLC_Orion_CellTempsDischargeChageCurrentLimit 7
	namespace Orion
	{
		struct _CellTempsDischargeChageCurrentLimit : public Messages::CANMsg {
			struct canData {
				int8_t MinCellVoltage;
				int8_t MaxCellVoltage;
				int8_t PackKwPower;
				int8_t ReqFanSpeed;
				int8_t IntakeTemperature;
				int8_t Blank;
				int8_t Blank;
			} __attribute__((aligned(8)));
			canData data;
			_CellTempsDischargeChageCurrentLimit() : CANMsg(CAN_ID_Orion_CellTempsDischargeChageCurrentLimit, CAN_DLC_Orion_CellTempsDischargeChageCurrentLimit) { }
		};
	}
	void processMessage(Orion::_CellTempsDischargeChageCurrentLimit& msg);
#endif
#ifdef USE_MSG_Telemetry_MpptPollJaved
#define CAN_ID_Telemetry_MpptPollJaved 0x711
#define CAN_DLC_Telemetry_MpptPollJaved 0
	namespace Telemetry
	{
		struct _MpptPollJaved : public Messages::CANMsg {
			struct canData {
			} __attribute__((aligned(8)));
			canData data;
			_MpptPollJaved() : CANMsg(CAN_ID_Telemetry_MpptPollJaved, CAN_DLC_Telemetry_MpptPollJaved) { }
		};
	}
	void processMessage(Telemetry::_MpptPollJaved& msg);
#endif
#ifdef USE_MSG_Telemetry_MpptPollWoof
#define CAN_ID_Telemetry_MpptPollWoof 0x712
#define CAN_DLC_Telemetry_MpptPollWoof 0
	namespace Telemetry
	{
		struct _MpptPollWoof : public Messages::CANMsg {
			struct canData {
			} __attribute__((aligned(8)));
			canData data;
			_MpptPollWoof() : CANMsg(CAN_ID_Telemetry_MpptPollWoof, CAN_DLC_Telemetry_MpptPollWoof) { }
		};
	}
	void processMessage(Telemetry::_MpptPollWoof& msg);
#endif
#ifdef USE_MSG_MpptJaved_MpptJaved
#define CAN_ID_MpptJaved_MpptJaved 0x771
#define CAN_DLC_MpptJaved_MpptJaved 7
	namespace MpptJaved
	{
		struct _MpptJaved : public Messages::CANMsg {
			struct canData {
				uint8_t FlagsAndMsbVoltageIn;
				uint8_t LsbVoltageIn;
				uint8_t MsbCurrentIn;
				uint8_t LsbCurrentIn;
				uint8_t MsbVoltageOut;
				uint8_t LsbVoltageOut;
				uint8_t AmbientTemperature;
			} __attribute__((aligned(8)));
			canData data;
			_MpptJaved() : CANMsg(CAN_ID_MpptJaved_MpptJaved, CAN_DLC_MpptJaved_MpptJaved) { }
		};
	}
	void processMessage(MpptJaved::_MpptJaved& msg);
#endif
#ifdef PROCESS_ALL_MSG
	void processAll(CANMsg& msg);
#endif
}
#endif