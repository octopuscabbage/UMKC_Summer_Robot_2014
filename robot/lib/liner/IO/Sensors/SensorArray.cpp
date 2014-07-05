#include "SensorArray.h"

SensorArray::SensorArray(){
	leftSensor.init(leftSensorPin,acuitiy);
	rightSensor.init(rightSensorPin,acuitiy);
	middleSensor.init(middleSensorPin,acuitiy);
}
bool SensorArray::updateSensors(){
	leftSensorIsBlack = leftSensor.read();
	rightSensorIsBlack = rightSensor.read();
	middleSensorIsBlack = middleSensor.read();	
	return (leftSensorIsBlack || rightSensorIsBlack);
}
