#pragma once

#include <Arduino.h>

class LedDriver
{
public:
  LedDriver(uint8_t orangePin, uint8_t greenPin);
  void initialize();
  void flashOrange(uint32_t duration);
  void flashGreen(uint32_t duration);

private:
  uint8_t _orangePin;
  uint8_t _greenPin;
};
