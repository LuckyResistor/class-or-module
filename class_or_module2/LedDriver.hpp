#pragma once

#include <Arduino.h>

namespace LedDriver {

void setOrangePin(uint8_t orangePin);
void setGreenPin(uint8_t greenPin);
void initialize();
void flashOrange(uint32_t duration);
void flashGreen(uint32_t duration);

}
