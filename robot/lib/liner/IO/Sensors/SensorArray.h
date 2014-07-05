#include "Sensor.h"

#ifndef L_SENSOR_ARRAY_H
#define L_SENSOR_ARRAY_H

class SensorArray{
public:
	SensorArray();
	bool leftSensorIsBlack;
	bool rightSensorIsBlack;
	bool middleSensorIsBlack;
	//Returns true if left or right sensor is black	
	bool updateSensors();
private:
	Sensor leftSensor;
	Sensor rightSensor;
	Sensor middleSensor;
	

	//Note: These pins are analog pins
	static const int leftSensorPin = A0;
	static const int rightSensorPin = A5;
	static const int middleSensorPin = A4;

	//The level that analog read needs to be above to be considered 'black'
	static const int acuity = 600; //TODO test
};
#endif
