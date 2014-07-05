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
	static const int leftSensorPin = 3;
	static const int rightSensorPin = 1;
	static const int middleSensorPin = 2;

	//The level that analog read needs to be above to be considered 'black'
	static const int acuitiy = 500; //TODO test
};
#endif
