#include "Event.h" 
#include "Arduino.h"
#ifndef NORMAL_OPERATION_EVENT_H
#define NORMAL_OPERATION_EVENT_H

class NormalOperationEvent : public Event {
public:
	virtual bool isNecessary(){
		return true;
	}
	virtual void operate(){

		Serial.println("NormalOperationEvent: Going forward.");	

		io->motorCommander.goDistance(10);
	}

};

#endif
