#ifndef MOTOR_COMMANDER_H
#define MOTOR_COMMANDER_H

#include "Servo.h"
#include "Arduino.h"

class MotorCommander{
	private:
		Servo left;
		Servo right;
                static const int leftPin = 10;
                static const int rightPin = 11;
		
		//Distance is in cm	
		static const double mmTraveledInOneSecond = 18.42;
		//Distance that it will travel without specification
		static const double mmStandardIncrement = 30;

		unsigned long mmToMillis(double mm){ return (mm/mmTraveledInOneSecond)*1000;}

		bool isAttached;

		
                
		//Generic turn function, motor is the motor you want to turn forward turn(motor.r) turns the robot right, blocks while doing so
		void turn(char motorToGoFoward,double mmToTravel);

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
			Serial.print("MotorCommander: Stopping.");
			left.detach();
			right.detach();
			isAttached = false;
		}
		//go forward a distance, blocks while doing so
		void goDistance(double mmToTravel);

		//0 is backward, 180 is forward, does not block while it's executing
		void goSpeed(int speed=180);
		void goForward(){
			goDistance(mmStandardIncrement);
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
