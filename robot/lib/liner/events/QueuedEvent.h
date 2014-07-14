#include "SensedEvent.h"
#include "ListOfEvents.h"
#include "AlignEvent.h"
#include "Arduino.h"

#ifndef QUEUED_EVENT_H
#define QUEUED_EVENT_H

class QueuedEvent : public SensedEvent{
	public:
		static int pos;
		virtual bool isNecessary(){
			updateSensors();
			Serial.print("QueuedEvent: Queued Event is ");
			Serial.println(((middleSensor && leftSensor) || (middleSensor && rightSensor) || (middleSensor && leftSensor && rightSensor)));
			return ((middleSensor && leftSensor) || (middleSensor && rightSensor) || (middleSensor && leftSensor && rightSensor));
		}
		virtual void operate(){
				Serial.print("QueuedEvent: Doing operation ");
				Serial.println(pos);
				char currentChar = eventListing[pos][0];
				if(currentChar == '*') return;
				while(currentChar != 'Q'){
					switch(currentChar){
						case 'F':
							goForward(eventListing[pos]);
							break;
						case 'T':
							turn(eventListing[pos]);
							break;
						case 'A':
							align();
							break;
						case 'B':
							doBoxAnimation();
							break;
					}	
				currentChar = eventListing[++pos][0];
				}
				++pos;
		}
		static void resetPos(){
			pos = 0;
		}

										
	private:
		void align(){
			Serial.println("QueuedEvent: Aligning");
			AlignEvent align;
			align.init(io);
			align.operate();

		}
		void turn(String& currentString){
			Serial.print("QueuedEvent: turning");
			int distance = atoi(currentString.substring(2).c_str());
			switch(eventListing[pos][1]){
				case 'R':

					Serial.print(" right for a distance ");
					Serial.println(distance);

					io->motorCommander.turnRight(distance);
					break;
				case 'L':

					Serial.print(" left for a distance ");
					Serial.println(distance);

					io->motorCommander.turnLeft(distance);
					break;
					}
		}

		void goForward(String& currentString){
			Serial.println("QueuedEvent: Going forward ");
			int distance = atoi(currentString.substring(1).c_str());
			Serial.print(distance);
			
			io->motorCommander.goDistance(distance);
		}
			
		void doBoxAnimation(){
			Serial.println("QueuedEvent: Doing box animation");
			return;
		}	
		int charToIntOver10(char toConvert){
			return (toConvert - 0)/10;
		}
			
};
#endif
