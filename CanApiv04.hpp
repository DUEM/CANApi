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
			_Telemetry() : CANMsg(CAN_ID_Telemetry_TimeAndFix, CAN_DLC_Telemetry_TimeAndFix) { }
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
			_Telemetry() : CANMsg(CAN_ID_Telemetry_SpeedAndAngle, CAN_DLC_Telemetry_SpeedAndAngle) { }
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
			_Telemetry() : CANMsg(CAN_ID_Telemetry_Latitude, CAN_DLC_Telemetry_Latitude) { }
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
			_Telemetry() : CANMsg(CAN_ID_Telemetry_Longitude, CAN_DLC_Telemetry_Longitude) { }
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
			_Telemetry() : CANMsg(CAN_ID_Telemetry_AltitudeAndSatellites, CAN_DLC_Telemetry_AltitudeAndSatellites) { }
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
			_Telemetry() : CANMsg(CAN_ID_Telemetry_SystemStatusMessages, CAN_DLC_Telemetry_SystemStatusMessages) { }
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
			_Testbed() : CANMsg(CAN_ID_Testbed_TestbedEnvirocanIno, CAN_DLC_Testbed_TestbedEnvirocanIno) { }
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
			_Testbed() : CANMsg(CAN_ID_Testbed_TestbedEnvirocanIno, CAN_DLC_Testbed_TestbedEnvirocanIno) { }
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
			_DriverControls() : CANMsg(CAN_ID_DriverControls_SpeedValCurrVal, CAN_DLC_DriverControls_SpeedValCurrVal) { }
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
			_DriverControls() : CANMsg(CAN_ID_DriverControls_Maxbuscurrent, CAN_DLC_DriverControls_Maxbuscurrent) { }
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
				uint32_t SerialNumber;
				uint32_t TritiumId;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_IdentificationInfo, CAN_DLC_Tritium_IdentificationInfo) { }
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
				uint16_t ActiveMotor;
				uint16_t ErrorFlags;
				uint16_t LimitFlags;
				uint16_t Reserved;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_StausInformation, CAN_DLC_Tritium_StausInformation) { }
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
				float BusCurrent;
				float BusVoltage;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_BusMeasurement, CAN_DLC_Tritium_BusMeasurement) { }
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
				float VehicleVelocity;
				float MotorVelocity;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_Velocity, CAN_DLC_Tritium_Velocity) { }
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
				float PhaseACurrent;
				float PhaseBCurrent;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_PhaseCurrent, CAN_DLC_Tritium_PhaseCurrent) { }
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
				float VectVoltReal;
				float VectVoltImag;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_MotorVoltageVector, CAN_DLC_Tritium_MotorVoltageVector) { }
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
				float VectCurrReal;
				float VectCurrImag;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_MotorCurrentVector, CAN_DLC_Tritium_MotorCurrentVector) { }
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
				float BackEmfReal;
				float BackEmfImag;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_MotorBackemfVector, CAN_DLC_Tritium_MotorBackemfVector) { }
		};
	}
	void processMessage(Tritium::_MotorBackemfVector& msg);
#endif
#ifdef USE_MSG_Tritium_Rail_15VAnd1_65V
#define CAN_ID_Tritium_Rail_15VAnd1_65V 0x608
#define CAN_DLC_Tritium_Rail_15VAnd1_65V 8
	namespace Tritium
	{
		struct _Rail_15VAnd1_65V : public Messages::CANMsg {
			struct canData {
				float FifteenVSupply;
				float Reserved;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_Rail_15VAnd1_65V, CAN_DLC_Tritium_Rail_15VAnd1_65V) { }
		};
	}
	void processMessage(Tritium::_Rail_15VAnd1_65V& msg);
#endif
#ifdef USE_MSG_Tritium_Rail_2_5VAnd1_2V
#define CAN_ID_Tritium_Rail_2_5VAnd1_2V 0x609
#define CAN_DLC_Tritium_Rail_2_5VAnd1_2V 8
	namespace Tritium
	{
		struct _Rail_2_5VAnd1_2V : public Messages::CANMsg {
			struct canData {
				float TwoFiveVSupply;
				float OneTwoVSupply;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_Rail_2_5VAnd1_2V, CAN_DLC_Tritium_Rail_2_5VAnd1_2V) { }
		};
	}
	void processMessage(Tritium::_Rail_2_5VAnd1_2V& msg);
#endif
#ifdef USE_MSG_Tritium_FanSpeedMeasurement
#define CAN_ID_Tritium_FanSpeedMeasurement 0x60A
#define CAN_DLC_Tritium_FanSpeedMeasurement 8
	namespace Tritium
	{
		struct _FanSpeedMeasurement : public Messages::CANMsg {
			struct canData {
				float FanSpeed;
				float FanDrive;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_FanSpeedMeasurement, CAN_DLC_Tritium_FanSpeedMeasurement) { }
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
			struct canData {
				float HeatSinkTemp;
				float MotorTemp;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_SinkMotorTemperature, CAN_DLC_Tritium_SinkMotorTemperature) { }
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
			struct canData {
				float AirInletTemp;
				float ProcessorTemp;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_AirInCpuTemperature, CAN_DLC_Tritium_AirInCpuTemperature) { }
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
			struct canData {
				float AirOutletTemp;
				float CapacitorTemp;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_AirOutCapTemperature, CAN_DLC_Tritium_AirOutCapTemperature) { }
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
			struct canData {
				float DcBusAmpHours;
				float Odometer;
			} __attribute__((aligned(8)));
			canData data;
			_Tritium() : CANMsg(CAN_ID_Tritium_OdoBusAmphours, CAN_DLC_Tritium_OdoBusAmphours) { }
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
			struct canData {
				uint16_t HighCellVoltage;
				uint16_t LowCellVoltage;
				uint16_t AvgCellVoltage;
			} __attribute__((aligned(8)));
			canData data;
			_Bms() : CANMsg(CAN_ID_Bms_CellVoltages, CAN_DLC_Bms_CellVoltages) { }
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
			struct canData {
				int8_t HighTemperature;
				int8_t LowTemperature;
				int8_t AverageTemperature;
				int8_t PackDcl;
				int8_t PackCcl;
				int8_t CurrentLimit;
			} __attribute__((aligned(8)));
			canData data;
			_Bms() : CANMsg(CAN_ID_Bms_CellTempsDischargeChageCurrentLimit, CAN_DLC_Bms_CellTempsDischargeChageCurrentLimit) { }
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
			struct canData {
				int16_t PackCurrent;
				uint16_t PackInstVoltage;
				uint16_t PackSumv;
				uint8_t PackSoc;
				uint8_t RelayState;
			} __attribute__((aligned(8)));
			canData data;
			_Bms() : CANMsg(CAN_ID_Bms_BmsMessage, CAN_DLC_Bms_BmsMessage) { }
		};
	}
	void processMessage(Bms::_BmsMessage& msg);
#endif
#ifdef PROCESS_ALL_MSG
	void processAll(CANMsg& msg);
#endif
}
#endif