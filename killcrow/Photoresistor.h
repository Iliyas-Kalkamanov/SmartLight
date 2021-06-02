#ifndef Photoresistor_h
#define Photoresistor_h

#include "Arduino.h"
#define LIT_VALUE 250

class Photoresistor {
public:
  Photoresistor(int pin);
  int read();
  int getValue();
  bool isLit();

private:
  int _pin;
  int value;
};

#endif