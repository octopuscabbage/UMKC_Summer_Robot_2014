#include "event.h"

#ifndef ALIGN_H
#define ALIGN_H

class AlignEvent{
	void do(){
		bool aligned = False;
		while(not aligned){
			io->sensorArray.updateSensors();
			bool rightSensor = io->sensorArray.rightSensorIsBlack;
			bool leftSensor = io->sensorArray.leftSensorIsBlack;
			bool middleSensor = io->sensorArray.middleSensorIsBlack;

			//We're aligned
			if(middleSensor && ! leftSensor && ! rightSensor){
				aligned = True;
				continue;
			}

			//We should be doing an event action now, which should have been tested earlier.
			//todo consider raising error here
			if(rightSensor && leftSensor && middleSensor){
				aligned = True;
				continue;
			}
			if(rightSensor) io->motorCommander.turn(io->motorCommander::Motors.LEFT, 1);
			if(leftSensor) io->motorCommander.turn(io->motorCommander::Motors.RIGHT, 1);
			
		}
		return;
	}
};
#endif
