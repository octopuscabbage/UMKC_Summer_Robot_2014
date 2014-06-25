#include "MotorCommander.h"

void MotorCommander::goDistance(double mmToTravel){
	reAttach();	
	left.write(0);
	right.write(180);
	Serial.print("MotorCommander: Going ");
	Serial.print(mmToMillis(mmToTravel));
	Serial.print(" milliseconds in order to attempt to travel ");
	Serial.print(mmToTravel);
	Serial.println(" mm.");
	waitAndStop(mmToMillis(mmToTravel));
	Serial.println("MotorCommander: Unblocking");
}

void MotorCommander::goSpeed(int speed){
	reAttach();
	left.write(180-speed);
	right.write(speed);

}
void MotorCommander::waitAndStop(unsigned long time){
	Serial.println("MotorCommander: Waiting...");
	delay(time);
	Serial.println("MotorCommander: Resuming...");
	stop();
}
void MotorCommander::reAttach(){
	if(!isAttached){
		Serial.print("MotorCommander: Re-Attaching");
		left.attach(leftPin);
		right.attach(rightPin);
	}
	
	isAttached=true;
}

void MotorCommander::turn(char motorToGoFoward,double mmToTravel){
	reAttach();
	switch(motorToGoFoward){
		case Motors::RIGHT: 
			right.write(180);
			left.write(180);
			waitAndStop(mmToMillis(mmToTravel));
			break;
		case Motors::LEFT:
			right.write(0);
			left.write(0);
			waitAndStop(mmToMillis(mmToTravel));
			break;
		}
}

void MotorCommander::turnSpeed(char motorToGoFoward, int speed){
	reAttach();
	switch(motorToGoFoward){
		case Motors::RIGHT:
			right.write(180);
			left.write(180);
			break;
		case Motors::LEFT:
			right.write(0);
			left.write(0);
			break;
	}
}

