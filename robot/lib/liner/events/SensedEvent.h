/**
 * An event that relies on the sensor
 * Adds three sensor variables and an update sensor function
 * Decends from Event
 */

#include "Event.h"
#ifndef SENSED_EVENT_H
#define SENSED_EVENT_H

class SensedEvent : public Event{
	protected:
		bool middleSensor;
		bool leftSensor;
		bool rightSensor;
	void updateSensors(){
		io->sensorArray.updateSensors();
		rightSensor = io->sensorArray.rightSensorIsBlack;
		leftSensor = io->sensorArray.leftSensorIsBlack;
		middleSensor = io->sensorArray.middleSensorIsBlack;
	}
};
#endif

