#include "IO.h"
#include "AlignEvent.h"
#include "NormalOperationEvent.h"
#include "QueuedEvent.h"
#include "Event.h"

#ifndef EVENT_DISPATCH_H 
#define EVENT_DISPATCH_H 


class EventDispatch{
private:
	IO* io;
	Event* requestedEvent;
	QueuedEvent qevent;
public:
	EventDispatch(){
		io = new IO;
		qevent.pos = 0;
		qevent.init(io);
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
				break;
			case QUEUED:
				requestedEvent = NULL;
				break;
		}
		if(requestedEvent != NULL) requestedEvent->init(io);
		
	}
	void doRequestedEvent(){
		if(requestedEvent != NULL) 
			requestedEvent->operate();
		else 
			qevent.operate();
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
