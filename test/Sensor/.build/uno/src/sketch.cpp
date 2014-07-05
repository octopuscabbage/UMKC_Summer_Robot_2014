#include <Arduino.h>

void setup();
void loop();
#line 1 "src/sketch.ino"

int val = 0;
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	val = analogRead(3);
	Serial.println(val);
	delay(100);
	
}
