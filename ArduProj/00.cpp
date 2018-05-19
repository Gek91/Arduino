/*
 * 00.cpp
 *
 *  Created on: 06 mag 2018
 *      Author: Gek
 */
#include <Arduino.h>
#include "00.h"


void setupFunc00() {

    pinMode(13, OUTPUT);

}

void loopFunc00() {

	digitalWrite(13, 0);
	delay(1000);
	digitalWrite(13, 1);
	delay(1000);

}

