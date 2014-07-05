#include "eventDispatch.h"

eventDispatch dispatch;

void setup()
{
}

void loop()
{
	eventDispatch.getEvent(eventDispatch.EventTypes::ALIGN);
	delay(500);
}
