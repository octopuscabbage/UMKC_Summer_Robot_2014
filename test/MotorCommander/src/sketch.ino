#include "MotorCommander.h"

MotorCommander mc;

void setup()
{	
	Serial.begin(9600);
}

void loop()
{
	mc.goForward();
	delay(1000);
}
