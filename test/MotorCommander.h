#ifndef MOTOR_COMMANDER_H
#define MOTOR_COMMANDER_H

#include "Servo.h"


class MotorCommander{
	private:
		Servo left;
		Servo right;
                static const int leftPin = 10;
                static const int rightPin = 11;

                //0 is backward, 180 is forward
		void writeAngleToBothMotors(int angle){
			left.write(angle);
			right.write(180-angle);
		}
                
		//Generic turn function, motor is the motor you want to turn forward turn(motor.r) turns the robot right
		void turn(char motorToGoFoward, int angleOfBoth=180){
			switch(motorToGoFoward){
				case Motors::RIGHT: 
					right.write(angleOfBoth);
					left.write(180 - angleOfBoth);
					break;
				case Motors::LEFT:
					right.write(180 - angleOfBoth);
					left.write(angleOfBoth);
					break;
			}
		}
	public:
                struct Motors{
                  static const char RIGHT = 'r';
                  static const char LEFT  = 'l';
                };
		
		void stop(){
			writeAngleToBothMotors(90);
		}
		void goForward(){
			writeAngleToBothMotors(180);
		}
		void goAngle(int angle){
			writeAngleToBothMotors(angle);
		}
		void goBackward(){
			writeAngleToBothMotors(0);
		}
		void turnRight(){
			turn(Motors::RIGHT);
		}
		//Supply the speed of the forward direction you want, for example turnRight(speed.foward.full);
		void turnRight(int angle){
			turn(Motors::RIGHT, angle);
		}
		void turnLeft(){
			turn(Motors::LEFT);
		}
		void turnLeft(int angle){
			turn(Motors::LEFT,angle);
		}
};
#endif
