/*
 * 02.cpp
 *
 *  Created on: 06 mag 2018
 *      Author: Gek
 */


#include <Arduino.h>
#include "02.h"

int switchState = 0;

void setupFunc02() {

  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);

}

void loopFunc02() {

  switchState = digitalRead(2);

  if(switchState == LOW) {

    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);


  } else {

    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);

    delay(250);

    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);

    delay(250);
  }

}

