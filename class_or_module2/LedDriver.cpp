#include "LedDriver.hpp"

namespace LedDriver {

uint8_t _orangePin;
uint8_t _greenPin;

void setOrangePin(uint8_t orangePin)
{
  _orangePin = orangePin;
}

void setGreenPin(uint8_t greenPin)
{
  _greenPin = greenPin;
}

void initialize()
{
  pinMode(_orangePin, OUTPUT);
  pinMode(_greenPin, OUTPUT);
}

void flashOrange(uint32_t duration)
{
  digitalWrite(_orangePin, HIGH);
  delay(duration);
  digitalWrite(_orangePin, LOW);
  delay(100);
}

void flashGreen(uint32_t duration)
{
  digitalWrite(_greenPin, HIGH);
  delay(duration);
  digitalWrite(_greenPin, LOW);
  delay(100);  
}

}
