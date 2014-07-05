#include <Arduino.h>
#include "eventDispatch.h"
void setup();
void loop();
#line 1 "src/sketch.ino"
//#include "eventDispatch.h"

eventDispatch dispatch;

void setup()
{
}

void loop()
{
	eventDispatch.getEvent(eventDispatch.EventTypes::ALIGN);
	delay(500);
}
