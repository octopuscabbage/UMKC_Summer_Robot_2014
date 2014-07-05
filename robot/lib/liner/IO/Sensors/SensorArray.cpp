#include "SensorArray.h"

SensorArray::SensorArray(){
	leftSensor.init(leftSensorPin,acuity);
	rightSensor.init(rightSensorPin,acuity);
	middleSensor.init(middleSensorPin,acuity);
}
bool SensorArray::updateSensors(){
	leftSensorIsBlack = leftSensor.read();
	rightSensorIsBlack = rightSensor.read();
	middleSensorIsBlack = middleSensor.read();	
	return (leftSensorIsBlack || rightSensorIsBlack);
}
