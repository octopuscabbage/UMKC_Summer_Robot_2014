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
							Serial.println("QueuedEvent: Going forward...");
							io->motorCommander.goDistance(charToIntOver10(eventListing[pos][1]));
							break;
						case 'T':
							Serial.print("QueuedEvent: Turning ");
							switch(eventListing[pos][1]){
								case 'R':
									Serial.println(" right.");
									io->motorCommander.turnRight(charToIntOver10(eventListing[pos][2]));
									break;
								case 'L':
									Serial.println(" left.");
									io->motorCommander.turnLeft(charToIntOver10(eventListing[pos][2]));
									break;
							}
							break;
						case 'A':{
							Serial.println("QueuedEvent: Aligning");
							AlignEvent align;
							align.init(io);
							align.operate();
							break;
						}
						case 'B':
							Serial.println("QueuedEvent: Doing box animation");
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
		void doBoxAnimation(){
			return;
		}	
		int charToIntOver10(char toConvert){
			return (toConvert - 0)/10;
		}
			
};
#endif
