#ifndef LED_h
#define LED_h

#include "Arduino.h"

class LED {
public:
  LED (int pin);
  bool isOn();
  void update();
  void write(char state);
  void turnOnFor(int milli_sec);

private:
  int _pin;
  char _state;
  unsigned long turnOffAfter;
};

#endif