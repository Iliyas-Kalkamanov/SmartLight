#include "LED.h"

LED::LED(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
  _state = LOW;
  turnOffAfter = 0;
}

void LED::update() {
  if(this->isOn() && millis() >= turnOffAfter)  this->write(LOW);
}

bool LED::isOn() {
  return _state;
}

void LED::write(char state){
  digitalWrite(_pin, state);
  _state = state;
}

void LED::turnOnFor(int milli_sec) {
  turnOffAfter = millis() + milli_sec;
  this->write(HIGH);
}