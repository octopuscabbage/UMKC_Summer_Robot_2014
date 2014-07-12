#include "EventDispatch.h"

EventDispatch dispatch;

void setup()
{
	Serial.begin(9600);
}


void loop()
{

	Serial.println("going");
	dispatch.setAndDoRequestedEvent(EventDispatch::QUEUED);
	Serial.println("ended");
}
