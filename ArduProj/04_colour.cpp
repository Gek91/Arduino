/*
 * 04_colour.cpp
 *
 *  Created on: 06 mag 2018
 *      Author: Gek
 */


#include <Arduino.h>
#include "04.h"


//PIN ( green, red, blue)
String colour[3] = {"Green", "Red", "Blue"};
int ledPin[3] = { 9 , 10, 11 };
int sensorPin[3] = {A0, A1, A2};


//VALUE
int value[3] = {0, 0, 0};
int sensorValue[3] = {0, 0, 0};

void setupFunc04() {

	Serial.begin(9600);

	for(int i = 0 ; i < 3 ; i++) {
		pinMode(ledPin[i], OUTPUT);
	}

}

void loopFunc04() {


	for(int i = 0 ; i < 3 ; i++) {

		sensorValue[i] = analogRead(sensorPin[i]);

		value[i] = sensorValue[i] / 4;

		analogWrite(ledPin[i], value[i]);

		Serial.println("Colour " + colour[i] + " values: sensor - " + sensorValue[i] + " | mapped - " + value[i]);

		delay(1000);
	}



}
