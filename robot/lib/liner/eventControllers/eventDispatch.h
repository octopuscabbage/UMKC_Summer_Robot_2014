#include "alignEvent.h"
#include "normalOperationEvent.h"
#include "event.h"

#ifndef EVENT_DISPATCH_H 
#define EVENT_DISPATCH_H 

class eventDispatch{
public:
	enum EventTypes{
		ALIGN,
		NORMAL, 
	}
	
	Event getEvent(EventTypes eventType){
		switch(eventType){
			case ALIGN:
				return new alignEvent;
				break;
		}
	}
};

#endif
