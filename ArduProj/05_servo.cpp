/*
 * 05_servo.cpp
 *
 *  Created on: 06 mag 2018
 *      Author: Gek
 */


#include <Arduino.h>
#include <Servo.h>
#include "05.h"

Servo myServo;

int const potPin = A0;
int potVal;
int angle;

void setupFunc05() {

	myServo.attach(9);

	Serial.begin(9600);
}

void loopFunc05() {

	potVal = analogRead(potPin);

	Serial.print("potVal: " + potVal);

	angle = map(potVal, 0 , 1023, 0 , 179); // Changes values from 0-1023 to 0-179

	Serial.println(" | angle: " + angle);

	myServo.write(angle);

	delay(1000);
}

