#include "HCSR04.h"

HCSR04::HCSR04(int trig, int echo) {
  pinMode(trig, OUTPUT);
  pinMode(trig, INPUT);
  _trig = trig;
  _echo = echo;
  _dist = 0;
  _oldDist = 0;
}

void HCSR04::scan() {
  _oldDist = _dist;
  digitalWrite(_trig, LOW);
	delayMicroseconds(2);
	digitalWrite(_trig, HIGH);
	delayMicroseconds(10);
	digitalWrite(_trig, LOW);
	noInterrupts();
	_dist = pulseIn(_echo, HIGH) / 58;
	interrupts();
	return _dist;
}

float HCSR04::distDifference() {
  return _oldDist - _dist;
}

float HCSR04::oldDist() {
  return _oldDist;
}
  