#include "MotorCommander.h"

void MotorCommander::goDistance(double cmToTravel){
	reAttach();	
	left.write(0);
	right.write(180);
	elapsedMillis timePassed;
	waitAndStop(cmToMillis(cmToTravel));
}

void MotorCommander::goSpeed(int speed){
	reAttach();
	left.write(0);
	right.write(180);

}
void MotorCommander::waitAndStop(unsigned long time){
	elapsedMillis timePassed;
	while(timePassed < time);
	stop();
}
void MotorCommander::reAttach(){
	if(!isAttached){
		left.attach(leftPin);
		right.attach(rightPin);
	}
	isAttached=true;
}

void MotorCommander::turn(char motorToGoFoward,double cmToTravel){
	reAttach();
	switch(motorToGoFoward){
		case Motors::RIGHT: 
			right.write(180);
			left.write(180);
			waitAndStop(cmToMillis(cmToTravel));
			break;
		case Motors::LEFT:
			right.write(0);
			left.write(0);
			waitAndStop(cmToMillis(cmToTravel));
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

