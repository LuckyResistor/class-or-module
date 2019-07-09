#include "LedDriver.hpp"

void LedDriver::setOrangePin(uint8_t orangePin)
{
  _orangePin = orangePin;
}

void LedDriver::setGreenPin(uint8_t greenPin)
{
  _greenPin = greenPin;
}

void LedDriver::initialize()
{
  pinMode(_orangePin, OUTPUT);
  pinMode(_greenPin, OUTPUT);
}

void LedDriver::flashOrange(uint32_t duration)
{
  digitalWrite(_orangePin, HIGH);
  delay(duration);
  digitalWrite(_orangePin, LOW);
  delay(100);
}

void LedDriver::flashGreen(uint32_t duration)
{
  digitalWrite(_greenPin, HIGH);
  delay(duration);
  digitalWrite(_greenPin, LOW);
  delay(100);  
}
