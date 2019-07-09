#include "LedDriver.hpp"

uint32_t gDuration = 100;

void setup() {
  LedDriver::setOrangePin(13);
  LedDriver::setGreenPin(12);
  LedDriver::initialize();
}

void loop() {
  LedDriver::flashOrange(gDuration);
  LedDriver::flashGreen(gDuration);
  gDuration += 20;
  if (gDuration > 500) {
    gDuration = 100;
  }
}
