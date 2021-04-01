#include "CeilingFan.h"

CeilingFan::CeilingFan()//Initializing required variables
	:speedNum(0),
	isReversed(false)
{
	updateSpeed();
}


void CeilingFan::Increment()
{
	speedNum++;
	updateSpeed();
}


void CeilingFan::Reverse()
{
	isReversed = !isReversed;
	//Flipping the boolean flag to indicate if reversed or not.
}


void CeilingFan::updateSpeed()
{

	switch (speedNum)
	{
	case 0:
		speedEnum_ = FanSpeed::OFF;//OFF
		break;
	case 1:
		speedEnum_ = FanSpeed::SPEED1;
		break;
	case 2:
		speedEnum_ = FanSpeed::SPEED2;
		break;
	case 3:
		speedEnum_ = FanSpeed::SPEED3;
		break;
	default:
		speedEnum_ = FanSpeed::OFF;//Means off if the speed is bigger than 2
		speedNum = 0;//reset the speed number to ZERO
		break;
	}
}


std::string CeilingFan::printCurrentState()
{
	std::string currentSpeed = speedNum == 0 ? " OFF" : "on speed " + std::to_string(speedNum);

	std::string currentMode = isReversed ? "Reversed mode" : "Regular mode";

	auto message = "The fan is currently " + currentSpeed +
		+ " and it is in " + currentMode;

	return message;
}


std::string CeilingFan::thankYouMessage()
{
	std::string thankYou = "**********************************************************************************************\n";
	thankYou+= "To the person who is reviewing my code.\n Thank you for your time and i hope my code was straight forward and with no complications.\n";
	thankYou += "**************************************************************************************************\n";

	return thankYou;
}



