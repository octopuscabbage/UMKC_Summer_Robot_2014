#include "IO.h"
#include "AlignEvent.h"
#include "NormalOperationEvent.h"
#include "Event.h"

#ifndef EVENT_DISPATCH_H 
#define EVENT_DISPATCH_H 


class EventDispatch{
private:
	IO* io;
	Event* requestedEvent;
public:
	EventDispatch(){
		io = new IO;
	}
	enum EventTypes{
		ALIGN,
		NORMAL, 
		QUEUED,
	};
	
	void setRequestedEvent(EventTypes eventType){
		delete requestedEvent;
		requestedEvent = NULL;
		switch(eventType){
			case ALIGN:
				requestedEvent = new AlignEvent;
				break;
			case NORMAL:
				requestedEvent = new NormalOperationEvent;
		}
		requestedEvent->init(io);
		
	}
	void doRequestedEvent(){
		requestedEvent->operate();
	}
	void setAndDoRequestedEvent(EventTypes eventType){
		setRequestedEvent(eventType);
		doRequestedEvent();
	}
	void setAndDoRequestedEventIfNecessary(EventTypes eventType){
		setRequestedEvent(eventType);
		if(requestedEvent->isNecessary()){
			doRequestedEvent();
		}
	}
	bool isRequestedEventNecessary(){
		return requestedEvent->isNecessary();
	}
};

#endif
