/**
 * An Event that doesn't do anything, used for when you need to 
 * return an event but don't want to actually do anything with it
 */

#include "event.h" 
#ifndef NONE_EVENT_H
#define NONE_EVENT_H

class NoneEvent : public Event {
public:
	virtual void operate(){
	}

};

#endif
