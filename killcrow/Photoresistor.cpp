
#include "Photoresistor.h"

Photoresistor::Photoresistor(int pin) {
  pinMode(pin, INPUT);
  _pin = pin;
  value = 0;
}

int Photoresistor::read() {
  value = analogRead(_pin);
  return value;
}

int Photoresistor::getValue() {
  return value;
}

bool Photoresistor::isLit(){
  return read() >= LIT_VALUE;  
}