/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by HaNa Oh
 * Mar 25, 2015
 *
 */

// Add #define pre-processor below
#include "LED_1.h"
#define FRONT_LED_PIN 10
#define REAR_LED_PIN 9
 
void setup() {
  //Add your code of Lab Assignment #1
	pinMode(FRONT_LED_PIN, OUTPUT);
	pinMode(REAR_LED_PIN, OUTPUT);
}

void loop() {
  //Add your code of Lab Assignment #1  
	digitalWrite(FRONT_LED_PIN, HIGH);
	digitalWrite(REAR_LED_PIN, LOW);
	delay(1000);

	digitalWrite(FRONT_LED_PIN, LOW);
	digitalWrite(REAR_LED_PIN, HIGH);
	delay(1000);
}
