#include "EventDispatch.h"

EventDispatch dispatch;

void setup()
{
	Serial.begin(9600);
}


void loop()
{

	dispatch.setAndDoRequestedEvent(EventDispatch::QUEUED);
	dispatch.setAndDoRequestedEvent(EventDispatch::QUEUED);
}
