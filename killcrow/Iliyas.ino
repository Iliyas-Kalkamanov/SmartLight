#include "Photoresistor.h"
#include "HCSR04.h"
#include "LED.h"

Photoresistor phs1(A4); //change pin
HCSR04 hc(2,3);  //trig pin, echo pin
LED led(5); // led pin

void setup() {}


void loop() {
  led.update();
  hc.scan();

  if (phs1.isLit()) led.turnOnFor(5000);
  if (hc.distDifference()) led.turnOnFor(20000);

  delay(100);
}
