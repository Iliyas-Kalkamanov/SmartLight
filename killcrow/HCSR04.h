#ifndef HCSR04_h
#define HCSR04_h

#include "Arduino.h"

class HCSR04 {
public:
  HCSR04 (int trig, int echo);
  void scan();
  float distDifference();
  float oldDist();

private:
  int _trig, _echo;
  float _dist, _oldDist;
};

#endif