
#include <string>
#pragma once


class CeilingFan
{
public:
	 CeilingFan();

	 void Increment();
	 
	 void Reverse();

	 void updateSpeed();

	 std::string printCurrentState();

	 std::string thankYouMessage();

private:
	enum class FanSpeed {
		OFF=0,SPEED1 =1,
		SPEED2=2,SPEED3=3
	};

private:
	FanSpeed speedEnum_;

	size_t speedNum;
	
	bool isReversed;
};

