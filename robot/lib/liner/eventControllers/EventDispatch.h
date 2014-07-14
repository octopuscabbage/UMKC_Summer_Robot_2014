#include "IO.h"
#include "AlignEvent.h"
#include "NormalOperationEvent.h"
#include "QueuedEvent.h"
#include "Event.h"
#include "Arduino.h"

#ifndef EVENT_DISPATCH_H 
#define EVENT_DISPATCH_H 


//This is needed to set the queued event
int QueuedEvent::pos = 0;

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

		Serial.print("EventQueue: Setting a new event type ");
		Serial.println(eventType);
		
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
				requestedEvent = new QueuedEvent;
				break;
		}
		requestedEvent->init(io);
		
	}
	void doRequestedEvent(){

		Serial.println("EventQueue: Doing requested event");
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
