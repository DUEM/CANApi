#include "CanApiv04.hpp"
namespace CANHelper
{
	void CanMsgHandler::DispatchMsg(can_frame msg)
	{
		switch(msg.can_id)
		{
#ifdef USE_MSG_Telemetry_TimeAndFix
		case 0x0F6:
			Messages::processMessage((Messages::Telemetry::_TimeAndFix&)msg);
			break;
#endif
#ifdef USE_MSG_Telemetry_SpeedAndAngle
		case 0x0F7:
			Messages::processMessage((Messages::Telemetry::_SpeedAndAngle&)msg);
			break;
#endif
#ifdef USE_MSG_Telemetry_Latitude
		case 0x0F8:
			Messages::processMessage((Messages::Telemetry::_Latitude&)msg);
			break;
#endif
#ifdef USE_MSG_Telemetry_Longitude
		case 0x0F9:
			Messages::processMessage((Messages::Telemetry::_Longitude&)msg);
			break;
#endif
#ifdef USE_MSG_Telemetry_AltitudeAndSatellites
		case 0x0FA:
			Messages::processMessage((Messages::Telemetry::_AltitudeAndSatellites&)msg);
			break;
#endif
#ifdef USE_MSG_Telemetry_SystemStatusMessages
		case 0x111:
			Messages::processMessage((Messages::Telemetry::_SystemStatusMessages&)msg);
			break;
#endif
#ifdef USE_MSG_Testbed_TestbedEnvirocanIno
		case 0x1B1:
			Messages::processMessage((Messages::Testbed::_TestbedEnvirocanIno&)msg);
			break;
#endif
#ifdef USE_MSG_Testbed_TestbedEnvirocanIno
		case 0x1B2:
			Messages::processMessage((Messages::Testbed::_TestbedEnvirocanIno&)msg);
			break;
#endif
#ifdef USE_MSG_DriverControls_SpeedValCurrVal
		case 0x501:
			Messages::processMessage((Messages::DriverControls::_SpeedValCurrVal&)msg);
			break;
#endif
#ifdef USE_MSG_DriverControls_Maxbuscurrent
		case 0x502:
			Messages::processMessage((Messages::DriverControls::_Maxbuscurrent&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_IdentificationInfo
		case 0x600:
			Messages::processMessage((Messages::Tritium::_IdentificationInfo&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_StausInformation
		case 0x601:
			Messages::processMessage((Messages::Tritium::_StausInformation&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_BusMeasurement
		case 0x602:
			Messages::processMessage((Messages::Tritium::_BusMeasurement&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_Velocity
		case 0x603:
			Messages::processMessage((Messages::Tritium::_Velocity&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_PhaseCurrent
		case 0x604:
			Messages::processMessage((Messages::Tritium::_PhaseCurrent&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_MotorVoltageVector
		case 0x605:
			Messages::processMessage((Messages::Tritium::_MotorVoltageVector&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_MotorCurrentVector
		case 0x606:
			Messages::processMessage((Messages::Tritium::_MotorCurrentVector&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_MotorBackemfVector
		case 0x607:
			Messages::processMessage((Messages::Tritium::_MotorBackemfVector&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_Rail_15V
		case 0x608:
			Messages::processMessage((Messages::Tritium::_Rail_15V&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_Rail_3_3VAnd1_9V
		case 0x609:
			Messages::processMessage((Messages::Tritium::_Rail_3_3VAnd1_9V&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_Reserved
		case 0x60A:
			Messages::processMessage((Messages::Tritium::_Reserved&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_SinkMotorTemperature
		case 0x60B:
			Messages::processMessage((Messages::Tritium::_SinkMotorTemperature&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_DspBoardTemperature
		case 0x60C:
			Messages::processMessage((Messages::Tritium::_DspBoardTemperature&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_Reserved
		case 0x60D:
			Messages::processMessage((Messages::Tritium::_Reserved&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_OdoBusAmphours
		case 0x60E:
			Messages::processMessage((Messages::Tritium::_OdoBusAmphours&)msg);
			break;
#endif
#ifdef USE_MSG_Tritium_SlipSpeedMeasurement
		case 0x617:
			Messages::processMessage((Messages::Tritium::_SlipSpeedMeasurement&)msg);
			break;
#endif
#ifdef USE_MSG_Orion_CellVoltages
		case 0x6B0:
			Messages::processMessage((Messages::Orion::_CellVoltages&)msg);
			break;
#endif
#ifdef USE_MSG_Orion_CellTempsDischargeChageCurrentLimit
		case 0x6B1:
			Messages::processMessage((Messages::Orion::_CellTempsDischargeChageCurrentLimit&)msg);
			break;
#endif
#ifdef USE_MSG_Orion_CellVoltages
		case 0x700:
			Messages::processMessage((Messages::Orion::_CellVoltages&)msg);
			break;
#endif
#ifdef USE_MSG_Orion_CellTempsDischargeChageCurrentLimit
		case 0x701:
			Messages::processMessage((Messages::Orion::_CellTempsDischargeChageCurrentLimit&)msg);
			break;
#endif
#ifdef USE_MSG_Orion_CellTempsDischargeChageCurrentLimit
		case 0x702:
			Messages::processMessage((Messages::Orion::_CellTempsDischargeChageCurrentLimit&)msg);
			break;
#endif
#ifdef USE_MSG_Telemetry_MpptPollJaved
		case 0x711:
			Messages::processMessage((Messages::Telemetry::_MpptPollJaved&)msg);
			break;
#endif
#ifdef USE_MSG_Telemetry_MpptPollWoof
		case 0x712:
			Messages::processMessage((Messages::Telemetry::_MpptPollWoof&)msg);
			break;
#endif
#ifdef USE_MSG_Mppt_Javed
		case 0x771:
			Messages::processMessage((Messages::Mppt::_Javed&)msg);
			break;
#endif
#ifdef USE_MSG_Mppt_Woof
		case 0x772:
			Messages::processMessage((Messages::Mppt::_Woof&)msg);
			break;
#endif
		}
#ifdef PROCESS_ALL_MSG
		processAll((Messages::CANMsg&) msg);
#endif
	}
}
