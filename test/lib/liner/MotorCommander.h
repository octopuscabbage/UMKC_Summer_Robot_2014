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
		
		//Distance is in cm	
		static const double cmTraveledInOneSecond = 18.42;
		//Distance that it will travel without specification
		static const double cmStandardIncrement = 3;

		unsigned long cmToMillis(double cm){ return (cm/cmTraveledInOneSecond) / 1000;}

		bool isAttached;

		//go forward a distance, blocks while doing so
		void goDistance(double cmToTravel);

		//0 is backward, 180 is forward, does not block while it's executing
		void goSpeed(int speed=180);
                
		//Generic turn function, motor is the motor you want to turn forward turn(motor.r) turns the robot right, blocks while doing so
		void turn(char motorToGoFoward,double cmToTravel);

		//Generic turn function, motor is motor you want to turn forward, does not block
		void turnSpeed(char motorToGoFoward, int speed=180);
	
		//Checks if the servos need to be reattached and does so if needed, needs to be called before every command
		void reAttach();

		//Blocks for a period of time, and stops afterwards
		void waitAndStop(unsigned long time);

					
	public:

		MotorCommander(){
			left.attach(leftPin);
			right.attach(rightPin);
			isAttached = true;
		}
                struct Motors{
                  static const char RIGHT = 'r';
                  static const char LEFT  = 'l';
                };
		
		void stop(){
			left.detach();
			right.detach();
			isAttached = false;
		}
		void goForward(){
			goDistance(3);
		}
		void goCM(double distance){
			goDistance(distance);
		}
		void goAngle(double angle){
			goSpeed(angle);
		}
		//void goBackward(){
		//	writeAngleToBothMotors(time,0);
		//}
		void turnRight(double distance){
			turn(Motors::RIGHT, distance);
		}
		void turnRightNB(int angle){
			turnSpeed(Motors::RIGHT, angle);
		}
		void turnLeft(double distance){
			turn(Motors::LEFT, distance);
		}
		void turnLeftNB(int angle){
			turnSpeed(Motors::LEFT,angle);
		}
};
#endif
