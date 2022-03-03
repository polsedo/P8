#include <Arduino.h>

#define LED 16

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  Serial.println("PUT ON");
  delay(1000);
  Serial.println("PUT OFF");
  digitalWrite(LED,LOW);
  delay(1000);
}

