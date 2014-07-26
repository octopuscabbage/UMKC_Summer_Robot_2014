#include "EventDispatch.h"
#include "AlignEvent.h"

EventDispatch dispatch;

void setup()
{
	Serial.begin(9600);
}


void loop()
{

	Serial.println("going");
	dispatch.setRequestedEvent(EventDispatch::QUEUED);
	if(dispatch.isRequestedEventNecessary()){
		dispatch.doRequestedEvent();
	}
	else{
		dispatch.setAndDoRequestedEvent(EventDispatch::NORMAL);
	}
	dispatch.setAndDoRequestedEventIfNecessary(EventDispatch::ALIGN);
	Serial.println("ended");
}
