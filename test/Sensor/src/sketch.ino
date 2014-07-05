#include "SensorArray.h"

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
