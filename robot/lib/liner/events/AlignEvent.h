/**
 * Attempts to align the robot, won't do anything if it doesn't need to
 */

#include "SensedEvent.h"
#include "Arduino.h"

#ifndef ALIGN_H
#define ALIGN_H

class AlignEvent : public SensedEvent{
	public:
		//todo update this
		virtual bool isNecessary(){
			updateSensors();
			return (leftSensor || rightSensor);
		}

		virtual void operate(){
			if(!isNecessary()) return;

			updateSensors();
			Serial.print("AlignEvent: Alignment Event Starting, sensors read: ");
			Serial.print(" Left Sensor - ");
			Serial.print(leftSensor);
			Serial.print(" Right Sensor - ");
			Serial.print(rightSensor);
			Serial.print(" Middle Sensor - ");
			Serial.println(middleSensor);

			while(isNecessary()){

				if(rightSensor) io->motorCommander.turnLeft(random(101) / 100);
				if(leftSensor) 	io->motorCommander.turnRight(random(101)/ 100);
				updateSensors();
			}


		}


	private:
		//Attempts to put the middle sensor only on the line, creates an expanding wave search
		void doTheFindTheLineShuffle(){
			//todo change this if the robot is shitty at finding the line this way
			int i = 1;
			bool turnRight = true;
			Serial.println("AlignEvent: Attempting to dance...");
			while(isNecessary()){


				Serial.print("Dancing to the ");
				Serial.print((turnRight)? "right" : "left");
				Serial.print(" for a distance of ");
				Serial.println(i);
				if(turnRight) io->motorCommander.turnRight(i);
				if(!turnRight){
					io->motorCommander.turnLeft(i);
					i++;
				}
				turnRight = !turnRight;
				updateSensors();

			}
		}

		void turnRightUntilMiddleSensorIsBlack(){
			Serial.println("AlignEvent: Turning right until we find our target");
			io->motorCommander.turnRightNB();
			while(!middleSensor){updateSensors();}
			io->motorCommander.stop();
		}
		void turnLeftUntilMiddleSensorIsBlack(){
			Serial.println("AlignEvent: Turning left until we find our target");
			io->motorCommander.turnLeftNB();
			while(!middleSensor){updateSensors();}
			io->motorCommander.stop();
		}

};
#endif
