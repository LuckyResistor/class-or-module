#include "LedDriver.hpp"

LedDriver ledDriver(13, 12);

uint32_t gDuration = 100;

void setup() {
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
