#include <Arduino.h>
#include "analogWrite.h"

#define CAMERA_LED_GPIO 16

void setup()
{
  analogWriteFrequency(12000);
}

// the loop function runs over and over again forever
void loop()
{
  float val = (exp(sin(millis() / 2000.0 * PI)) - 0.36787944) * 108.0;
  analogWrite(CAMERA_LED_GPIO, val); 
}