/*
 * 06_piezo.cpp
 *
 *  Created on: 13 mag 2018
 *      Author: Gek
 */


#include <Arduino.h>
#include "06.h"

int sensorValue1;
int sensorLow = 1023;
int sensorHigh = 0;

const int ledPin = 13;

void setupFunc06() {

	pinMode(ledPin, OUTPUT);
	digitalWrite(ledPin, HIGH);

	//calibrazione sensore
	while(millis() < 5000) {

		sensorValue1 = analogRead(A0);

		if(sensorValue1 > sensorHigh) {

			sensorHigh= sensorValue1;
		}

		if(sensorValue1 < sensorLow) {

			sensorLow = sensorValue1;
		}

		digitalWrite(ledPin, LOW);
	}
}

void loopFunc06() {

//	sensorValue1 = analogRead(A0);
//
//	int pitch = map(sensorValue1 , sensorLow, sensorHigh, 50, 2000);
//
//	tone(8, pitch, 20);
//
//	delay(100);
}
