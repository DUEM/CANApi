#ifndef CanApiv04_INCLUDE_GUARD
#define CanApiv04_INCLUDE_GUARD
#include "CANHelper.hpp"
namespace CANHelper::Messages
{
#ifdef USE_MSG_Source_Item
#define CAN_ID_Source_Item CAN_ID
#define CAN_DLC_Source_Item DLC
	namespace Source
	{
		struct _Item : public Messages::CANMsg {
			struct canData
			{
				datatype Byte0;
			} __attribute__((aligned(8)));
			canData data;
			_Item() : CANMsg(CAN_ID_Source_Item, CAN_DLC_Source_Item) { }
		};
	}
	void processMessage(Source::_Item& msg);
#endif
#ifdef USE_MSG_Telemetry_TimeAndFix
#define CAN_ID_Telemetry_TimeAndFix 0x8F6
#define CAN_DLC_Telemetry_TimeAndFix 8
	namespace Telemetry
	{
		struct _TimeAndFix : public Messages::CANMsg {
			struct canData
			{
				uint8 GpsHour;
				uint8 GpsMinute;
				uint8 GpsSeconds;
				uint8 GpsDay;
				uint8 GpsMonth;
				uint8 GpsYear;
				uint8 GpsFix;
				uint8 GpsFixquality;
			} __attribute__((aligned(8)));
			canData data;
			_TimeAndFix() : CANMsg(CAN_ID_Telemetry_TimeAndFix, CAN_DLC_Telemetry_TimeAndFix) { }
		};
	}
	void processMessage(Telemetry::_TimeAndFix& msg);
#endif
#ifdef USE_MSG_Telemetry_SpeedAndAngle
#define CAN_ID_Telemetry_SpeedAndAngle 0x8F7
#define CAN_DLC_Telemetry_SpeedAndAngle 8
	namespace Telemetry
	{
		struct _SpeedAndAngle : public Messages::CANMsg {
			struct canData
			{
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
#define CAN_ID_Telemetry_Latitude 0x8F8
#define CAN_DLC_Telemetry_Latitude 5
	namespace Telemetry
	{
		struct _Latitude : public Messages::CANMsg {
			struct canData
			{
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
#define CAN_ID_Telemetry_Longitude 0x8F9
#define CAN_DLC_Telemetry_Longitude 5
	namespace Telemetry
	{
		struct _Longitude : public Messages::CANMsg {
			struct canData
			{
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
#define CAN_ID_Telemetry_AltitudeAndSatellites 0x8FA
#define CAN_DLC_Telemetry_AltitudeAndSatellites 5
	namespace Telemetry
	{
		struct _AltitudeAndSatellites : public Messages::CANMsg {
			struct canData
			{
				float GpsAltitude;
				uint8 GpsSatellites;
			} __attribute__((aligned(8)));
			canData data;
			_AltitudeAndSatellites() : CANMsg(CAN_ID_Telemetry_AltitudeAndSatellites, CAN_DLC_Telemetry_AltitudeAndSatellites) { }
		};
	}
	void processMessage(Telemetry::_AltitudeAndSatellites& msg);
#endif
#ifdef USE_MSG_Telemetry_SystemStatusMessages
#define CAN_ID_Telemetry_SystemStatusMessages 0x811
#define CAN_DLC_Telemetry_SystemStatusMessages 8
	namespace Telemetry
	{
		struct _SystemStatusMessages : public Messages::CANMsg {
			struct canData
			{
				uint8 Power;
				uint8 WritingToSd;
				uint8 GpsTimeObtained;
				uint8 LoadedConfig;
				uint8 Flag;
				uint8 Spare1;
				uint8 Spare2;
				uint8 Spare3;
			} __attribute__((aligned(8)));
			canData data;
			_SystemStatusMessages() : CANMsg(CAN_ID_Telemetry_SystemStatusMessages, CAN_DLC_Telemetry_SystemStatusMessages) { }
		};
	}
	void processMessage(Telemetry::_SystemStatusMessages& msg);
#endif
#ifdef USE_MSG_Testbed_TestbedEnvirocanIno1
#define CAN_ID_Testbed_TestbedEnvirocanIno1 0x8B1
#define CAN_DLC_Testbed_TestbedEnvirocanIno1 8
	namespace Testbed
	{
		struct _TestbedEnvirocanIno1 : public Messages::CANMsg {
			struct canData
			{
				float TempDegC;
				float Humidity;
			} __attribute__((aligned(8)));
			canData data;
			_TestbedEnvirocanIno1() : CANMsg(CAN_ID_Testbed_TestbedEnvirocanIno1, CAN_DLC_Testbed_TestbedEnvirocanIno1) { }
		};
	}
	void processMessage(Testbed::_TestbedEnvirocanIno1& msg);
#endif
#ifdef USE_MSG_Testbed_TestbedEnvirocanIno2
#define CAN_ID_Testbed_TestbedEnvirocanIno2 0x8B2
#define CAN_DLC_Testbed_TestbedEnvirocanIno2 8
	namespace Testbed
	{
		struct _TestbedEnvirocanIno2 : public Messages::CANMsg {
			struct canData
			{
				float HeatIndexDegC;
				int32 LdrReading;
			} __attribute__((aligned(8)));
			canData data;
			_TestbedEnvirocanIno2() : CANMsg(CAN_ID_Testbed_TestbedEnvirocanIno2, CAN_DLC_Testbed_TestbedEnvirocanIno2) { }
		};
	}
	void processMessage(Testbed::_TestbedEnvirocanIno2& msg);
#endif
#ifdef USE_MSG_DriverControls_SpeedValCurrVal
#define CAN_ID_DriverControls_SpeedValCurrVal 0x501
#define CAN_DLC_DriverControls_SpeedValCurrVal 8
	namespace DriverControls
	{
		struct _SpeedValCurrVal : public Messages::CANMsg {
			struct canData
			{
				float DriverSetSpeed;
				float DriverSetCurrent;
			} __attribute__((aligned(8)));
			canData data;
			_SpeedValCurrVal() : CANMsg(CAN_ID_DriverControls_SpeedValCurrVal, CAN_DLC_DriverControls_SpeedValCurrVal) { }
		};
	}
	void processMessage(DriverControls::_SpeedValCurrVal& msg);
#endif
#ifdef USE_MSG_DriverControls_0Maxbuscurrent
#define CAN_ID_DriverControls_0Maxbuscurrent 0x502
#define CAN_DLC_DriverControls_0Maxbuscurrent 8
	namespace DriverControls
	{
		struct _0Maxbuscurrent : public Messages::CANMsg {
			struct canData
			{
				float Zero;
				float MaxBusCurrent;
			} __attribute__((aligned(8)));
			canData data;
			_0Maxbuscurrent() : CANMsg(CAN_ID_DriverControls_0Maxbuscurrent, CAN_DLC_DriverControls_0Maxbuscurrent) { }
		};
	}
	void processMessage(DriverControls::_0Maxbuscurrent& msg);
#endif
#ifdef USE_MSG_Tritium_IdentificationInfo
#define CAN_ID_Tritium_IdentificationInfo 0x600
#define CAN_DLC_Tritium_IdentificationInfo 8
	namespace Tritium
	{
		struct _IdentificationInfo : public Messages::CANMsg {
			struct canData
			{
				uint32 SerialNumber;
				uint32 TritiumId;
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
			struct canData
			{
				uint16 ActiveMotor;
				uint16 ErrorFlags;
				uint16 LimitFlags;
				uint16 Reserved;
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
			struct canData
			{
				float BusCurrent;
				float BusVoltage;
			} __attribute__((aligned(8)));
			canData data;
			_BusMeasurement() : CANMsg(CAN_ID_Tritium_BusMeasurement, CAN_DLC_Tritium_BusMeasurement) { }
		};
	}
	void processMessage(Tritium::_BusMeasurement& msg);
#endif
#ifdef USE_MSG_Tritium_VelocityMSRpm
#define CAN_ID_Tritium_VelocityMSRpm 0x603
#define CAN_DLC_Tritium_VelocityMSRpm 8
	namespace Tritium
	{
		struct _VelocityMSRpm : public Messages::CANMsg {
			struct canData
			{
				float VehicleVelocity;
				float MotorVelocity;
			} __attribute__((aligned(8)));
			canData data;
			_VelocityMSRpm() : CANMsg(CAN_ID_Tritium_VelocityMSRpm, CAN_DLC_Tritium_VelocityMSRpm) { }
		};
	}
	void processMessage(Tritium::_VelocityMSRpm& msg);
#endif
#ifdef USE_MSG_Tritium_PhaseCurrent
#define CAN_ID_Tritium_PhaseCurrent 0x604
#define CAN_DLC_Tritium_PhaseCurrent 8
	namespace Tritium
	{
		struct _PhaseCurrent : public Messages::CANMsg {
			struct canData
			{
				float PhaseACurrent;
				float PhaseBCurrent;
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
			struct canData
			{
				float VectVoltReal;
				float VectVoltImag;
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
			struct canData
			{
				float VectCurrReal;
				float VectCurrImag;
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
			struct canData
			{
				float BackEmfReal;
				float BackEmfImag;
			} __attribute__((aligned(8)));
			canData data;
			_MotorBackemfVector() : CANMsg(CAN_ID_Tritium_MotorBackemfVector, CAN_DLC_Tritium_MotorBackemfVector) { }
		};
	}
	void processMessage(Tritium::_MotorBackemfVector& msg);
#endif
#ifdef USE_MSG_Tritium_15165VoltRail
#define CAN_ID_Tritium_15165VoltRail 0x608
#define CAN_DLC_Tritium_15165VoltRail 8
	namespace Tritium
	{
		struct _15165VoltRail : public Messages::CANMsg {
			struct canData
			{
				float FifteenVSupply;
				float Reserved;
			} __attribute__((aligned(8)));
			canData data;
			_15165VoltRail() : CANMsg(CAN_ID_Tritium_15165VoltRail, CAN_DLC_Tritium_15165VoltRail) { }
		};
	}
	void processMessage(Tritium::_15165VoltRail& msg);
#endif
#ifdef USE_MSG_Tritium_2512VoltRail
#define CAN_ID_Tritium_2512VoltRail 0x609
#define CAN_DLC_Tritium_2512VoltRail 8
	namespace Tritium
	{
		struct _2512VoltRail : public Messages::CANMsg {
			struct canData
			{
				float TwoFiveVSupply;
				float OneTwoVSupply;
			} __attribute__((aligned(8)));
			canData data;
			_2512VoltRail() : CANMsg(CAN_ID_Tritium_2512VoltRail, CAN_DLC_Tritium_2512VoltRail) { }
		};
	}
	void processMessage(Tritium::_2512VoltRail& msg);
#endif
#ifdef USE_MSG_Tritium_FanSpeedMeasurement
#define CAN_ID_Tritium_FanSpeedMeasurement 0x60A
#define CAN_DLC_Tritium_FanSpeedMeasurement 8
	namespace Tritium
	{
		struct _FanSpeedMeasurement : public Messages::CANMsg {
			struct canData
			{
				float FanSpeed;
				float FanDrive;
			} __attribute__((aligned(8)));
			canData data;
			_FanSpeedMeasurement() : CANMsg(CAN_ID_Tritium_FanSpeedMeasurement, CAN_DLC_Tritium_FanSpeedMeasurement) { }
		};
	}
	void processMessage(Tritium::_FanSpeedMeasurement& msg);
#endif
#ifdef USE_MSG_Tritium_SinkMotorTemperature
#define CAN_ID_Tritium_SinkMotorTemperature 0x60B
#define CAN_DLC_Tritium_SinkMotorTemperature 8
	namespace Tritium
	{
		struct _SinkMotorTemperature : public Messages::CANMsg {
			struct canData
			{
				float HeatSinkTemp;
				float MotorTemp;
			} __attribute__((aligned(8)));
			canData data;
			_SinkMotorTemperature() : CANMsg(CAN_ID_Tritium_SinkMotorTemperature, CAN_DLC_Tritium_SinkMotorTemperature) { }
		};
	}
	void processMessage(Tritium::_SinkMotorTemperature& msg);
#endif
#ifdef USE_MSG_Tritium_AirInCpuTemperature
#define CAN_ID_Tritium_AirInCpuTemperature 0x60C
#define CAN_DLC_Tritium_AirInCpuTemperature 8
	namespace Tritium
	{
		struct _AirInCpuTemperature : public Messages::CANMsg {
			struct canData
			{
				float AirInletTemp;
				float ProcessorTemp;
			} __attribute__((aligned(8)));
			canData data;
			_AirInCpuTemperature() : CANMsg(CAN_ID_Tritium_AirInCpuTemperature, CAN_DLC_Tritium_AirInCpuTemperature) { }
		};
	}
	void processMessage(Tritium::_AirInCpuTemperature& msg);
#endif
#ifdef USE_MSG_Tritium_AirOutCapTemperature
#define CAN_ID_Tritium_AirOutCapTemperature 0x60D
#define CAN_DLC_Tritium_AirOutCapTemperature 8
	namespace Tritium
	{
		struct _AirOutCapTemperature : public Messages::CANMsg {
			struct canData
			{
				float AirOutletTemp;
				float CapacitorTemp;
			} __attribute__((aligned(8)));
			canData data;
			_AirOutCapTemperature() : CANMsg(CAN_ID_Tritium_AirOutCapTemperature, CAN_DLC_Tritium_AirOutCapTemperature) { }
		};
	}
	void processMessage(Tritium::_AirOutCapTemperature& msg);
#endif
#ifdef USE_MSG_Tritium_OdoBusAmphours
#define CAN_ID_Tritium_OdoBusAmphours 0x60E
#define CAN_DLC_Tritium_OdoBusAmphours 8
	namespace Tritium
	{
		struct _OdoBusAmphours : public Messages::CANMsg {
			struct canData
			{
				float DcBusAmpHours;
				float Odometer;
			} __attribute__((aligned(8)));
			canData data;
			_OdoBusAmphours() : CANMsg(CAN_ID_Tritium_OdoBusAmphours, CAN_DLC_Tritium_OdoBusAmphours) { }
		};
	}
	void processMessage(Tritium::_OdoBusAmphours& msg);
#endif
#ifdef USE_MSG_Bms_CellVoltages
#define CAN_ID_Bms_CellVoltages 0x700
#define CAN_DLC_Bms_CellVoltages 6
	namespace Bms
	{
		struct _CellVoltages : public Messages::CANMsg {
			struct canData
			{
				uint16 HighCellVoltage;
				uint16 LowCellVoltage;
				uint16 AvgCellVoltage;
			} __attribute__((aligned(8)));
			canData data;
			_CellVoltages() : CANMsg(CAN_ID_Bms_CellVoltages, CAN_DLC_Bms_CellVoltages) { }
		};
	}
	void processMessage(Bms::_CellVoltages& msg);
#endif
#ifdef USE_MSG_Bms_CellTempsDischargeChageCurrentLimit
#define CAN_ID_Bms_CellTempsDischargeChageCurrentLimit 0x701
#define CAN_DLC_Bms_CellTempsDischargeChageCurrentLimit 6
	namespace Bms
	{
		struct _CellTempsDischargeChageCurrentLimit : public Messages::CANMsg {
			struct canData
			{
				int8 HighTemperature;
				int8 LowTemperature;
				int8 AverageTemperature;
				int8 PackDcl;
				int8 PackCcl;
				int8 CurrentLimit;
			} __attribute__((aligned(8)));
			canData data;
			_CellTempsDischargeChageCurrentLimit() : CANMsg(CAN_ID_Bms_CellTempsDischargeChageCurrentLimit, CAN_DLC_Bms_CellTempsDischargeChageCurrentLimit) { }
		};
	}
	void processMessage(Bms::_CellTempsDischargeChageCurrentLimit& msg);
#endif
#ifdef USE_MSG_Bms_BmsMessage
#define CAN_ID_Bms_BmsMessage 0x702
#define CAN_DLC_Bms_BmsMessage 8
	namespace Bms
	{
		struct _BmsMessage : public Messages::CANMsg {
			struct canData
			{
				int16 PackCurrent;
				uint16 PackInstVoltage;
				uint16 PackSumv;
				uint8 PackSoc;
				uint8 RelayState;
			} __attribute__((aligned(8)));
			canData data;
			_BmsMessage() : CANMsg(CAN_ID_Bms_BmsMessage, CAN_DLC_Bms_BmsMessage) { }
		};
	}
	void processMessage(Bms::_BmsMessage& msg);
#endif
#ifdef PROCESS_ALL_MSG
	void processAll(CANMsg& msg);
#endif
}
#endif