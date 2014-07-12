#include <Arduino.h>
#include "EventDispatch.h"
void setup();
void loop();
#line 1 "src/sketch.ino"
//#include "EventDispatch.h"

EventDispatch dispatch;

void setup()
{
	Serial.begin(9600);
}


void loop()
{

	Serial.println("going");
	//Make a call to Align Event
	dispatch.setAndDoRequestedEventIfNecessary(EventDispatch::ALIGN);
	//Go forward a bit
	dispatch.setAndDoRequestedEvent(EventDispatch::NORMAL);
	//Check if a queue evnet is necessary
	dispatch.setRequestedEvent(EventDispatch::QUEUED);
	if(dispatch.isRequestedEventNecessary()){
		dispatch.doRequestedEvent();
	}
	Serial.println("ended");
}
