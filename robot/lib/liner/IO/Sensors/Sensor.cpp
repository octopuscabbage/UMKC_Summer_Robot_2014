#include "Sensor.h"

void Sensor::init(int pin, int acuity){
	SensorPin = pin;
	SensorAcuity = acuity;
}


bool Sensor::read(){
	int reading = analogRead(SensorPin);
	debugOutput(reading);
	lastReading = (reading >= SensorAcuity);
	return lastReading;
}

void Sensor::debugOutput(int reading){
	Serial.print("Sensor on pin ");
	Serial.print(SensorPin);
	Serial.print(" read a value of ");
	Serial.println(reading);

}
