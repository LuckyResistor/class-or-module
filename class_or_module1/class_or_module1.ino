#include "LedDriver.hpp"

LedDriver ledDriver;

uint32_t gDuration = 100;

void setup() {
  ledDriver.setOrangePin(13);
  ledDriver.setGreenPin(12);
  ledDriver.initialize();
}

void loop() {
  ledDriver.flashOrange(gDuration);
  ledDriver.flashGreen(gDuration);
  gDuration += 20;
  if (gDuration > 500) {
    gDuration = 100;
  }
}
