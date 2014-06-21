#include "MotorCommander.h"

MotorCommander::writeTimeToBothMotors(unsigned long time, int angle){
	left.write(angle);
	right.write(180-angle);
	elapsedMillis timePassed;
	while(timePassed < time);
	stop();
}
MotorCommander::turn(char motorToGoFoward, unsigned long time, int angleOfBoth){

	switch(motorToGoFoward){
			case Motors::RIGHT: 
				right.write(angleOfBoth);
				left.write(180 - angleOfBoth);
				elapsedMillis timePassed;
				while(timePassed<time);
				stop();
				break;
			case Motors::LEFT:
				right.write(180 - angleOfBoth);
				left.write(angleOfBoth);
				while(timePassed<time);
				stop();
				break;
			}
}

