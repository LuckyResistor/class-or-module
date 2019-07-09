#pragma once

#include <Arduino.h>

class LedDriver
{
public:
  void setOrangePin(uint8_t orangePin);
  void setGreenPin(uint8_t greenPin);
  void initialize();
  void flashOrange(uint32_t duration);
  void flashGreen(uint32_t duration);

private:
  uint8_t _orangePin;
  uint8_t _greenPin;
};
