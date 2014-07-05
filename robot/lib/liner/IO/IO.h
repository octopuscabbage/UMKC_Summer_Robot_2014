/**
 * Contains references to all of the IO modules of the robot
 */


#include "MotorCommander.h"
#include "SensorArray.h"

#ifndef IO_H
#define IO_H

struct IO{
	MotorCommander motorCommander;
	SensorArray sensorArray;
	
}
