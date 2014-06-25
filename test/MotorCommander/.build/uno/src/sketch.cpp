#include <Arduino.h>
#include "MotorCommander.h"
void setup();
void loop();
#line 1 "src/sketch.ino"
//#include "MotorCommander.h"

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
