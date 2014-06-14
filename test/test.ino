#include <Servo.h>

#include "MotorCommander.h"

MotorCommander mcommand();

void setup()
{
	Serial.begin(9600);
}
void loop();
	//("wasd for fps movement, q for stop)
	char input = Serial.read();
	switch(input){
		case 'w':
			mcommand.goForward();
			break;
		case 'a':
			mcommand.turnLeft();
			break;
		case 'd':
			mcommand.turnRight();
			break;
		case 's':
			mcommand.goBackward();
			break;
		case 'q':
			mcommand.stop()
			break;
	}
}
