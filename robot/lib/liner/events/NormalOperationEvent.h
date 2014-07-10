#include "Event.h" 
#ifndef NORMAL_OPERATION_EVENT_H
#define NORMAL_OPERATION_EVENT_H

class NormalOperationEvent : public Event {
public:
	virtual bool isNecessary(){
		return true;
	}
	virtual void operate(){
		io->motorCommander.goDistance(10);
	}

};

#endif
