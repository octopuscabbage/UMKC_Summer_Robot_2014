#include <Arduino.h>
#include "EventDispatch.h"
#include "AlignEvent.h"
void setup();
void loop();
#line 1 "src/sketch.ino"
//#include "EventDispatch.h"
//#include "AlignEvent.h"

EventDispatch dispatch;

void setup()
{
	Serial.begin(9600);
}


void loop()
{

	Serial.println("going");
	dispatch.setAndDoRequestedEventIfNecessary(EventDispatch::ALIGN);
	dispatch.setRequestedEvent(EventDispatch::QUEUED);
	if(dispatch.isRequestedEventNecessary()){
		dispatch.doRequestedEvent();
	}
	else{
		dispatch.setAndDoRequestedEvent(EventDispatch::NORMAL);
	}
	Serial.println("ended");
}
