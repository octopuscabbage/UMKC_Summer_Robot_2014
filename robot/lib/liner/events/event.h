/**
 * Represents an abstract interface class which defines
 * the functionality of all event subclasses.
 *
 * Events represent a single action to be taken by the robot, and may access 
 * IO features.
 */

#include "IO.h"
#ifndef EVENT_H
#define EVENT_H

template<class T>
class Event{
protected:
	IO* io;

public:
	/**
	 * Should be called in eventDispatch, to handle creation
	 * of the event.
	 * Passes the pointer to the IO module
	 *
	 * If IO can be static this might not be needed
	 *
	 */
	virtual void init(IO* io_ptr){
		io = io_ptr;
	}
	/**
	 * The does the action that the event represents which may return a value.
	 * 
	 */
	virtual T  do() = 0;
};
#endif 	 
