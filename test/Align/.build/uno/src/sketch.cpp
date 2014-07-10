#include <Arduino.h>
#include "eventDispatch.h"
#include "alignEvent.h"
void setup();
void loop();
#line 1 "src/sketch.ino"
//#include "eventDispatch.h"
//#include "alignEvent.h"

EventDispatch dispatch;

void setup()
{
	Serial.begin(9600);
}


void loop()
{

	Serial.println("going");
	dispatch.setAndDoRequestedEvent(EventDispatch::ALIGN);
	Serial.println("ended");
	delay(500);
}
