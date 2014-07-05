#include <Arduino.h>
#include "SensorArray.h"
void setup();
void loop();
#line 1 "src/sketch.ino"
//#include "SensorArray.h"

SensorArray sarray;

int val;
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	
	sarray.updateSensors();
	delay(500);
	
}
