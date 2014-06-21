#ifndef MOTOR_COMMANDER_H
#define MOTOR_COMMANDER_H

#include "Servo.h"
#include "elapsedMillis.h"


class MotorCommander{
	private:
		Servo left;
		Servo right;
                static const int leftPin = 10;
                static const int rightPin = 11;
		


                //0 is backward, 180 is forward
		void writeTimeToBothMotors(unsigned long time, int angle=90);
                
		//Generic turn function, motor is the motor you want to turn forward turn(motor.r) turns the robot right
		void turn(char motorToGoFoward, unsigned long time, int angleOfBoth=180);
					
	public:

		MotorCommander(){
			left.attach(10);
			right.attach(11);
		}
                struct Motors{
                  static const char RIGHT = 'r';
                  static const char LEFT  = 'l';
                };
		
		void stop(){
			writeAngleToBothMotors(90);
		}
		void goForward(){
			writeAngleToBothMotors(time,180);
		}
		void goAngle(unsigned long time,int angle){
			writeAngleToBothMotors(time,angle);
		}
		void goBackward(){
			writeAngleToBothMotors(time,0);
		}
		void turnRight(unsigned long time){
			turn(time, Motors::RIGHT);
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
