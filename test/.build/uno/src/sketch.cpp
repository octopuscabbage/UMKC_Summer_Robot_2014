#include <Arduino.h>
#include "MotorCommander.h"
void setup();
void loop();
#line 1 "src/sketch.ino"
//#include "MotorCommander.h"

MotorCommander mc;
void setup()
{	
}

void loop()
{
	mc.goCM(10);
}
