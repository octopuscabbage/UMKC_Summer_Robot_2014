#include "Arduino.h"

#ifndef L_SENSOR_H
#define L_SENSOR_H

class Sensor{
public:
	//C++ is fun
	void init(int pin, int acuity);
	//Reads the sensor and determines whether the reading is above the acuity
	bool read();
	//Returns the last reading without recalculating
	bool lastReading;
private:
	int SensorPin;
	int SensorAcuity;

	//Outputs the result of a read operation
	void debugOutput(int reading);
};
#endif

