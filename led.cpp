#include "led.h"

#include <Arduino.h>

Led::Led(int pin)
  : pin_(pin)
{
}

void
Led::setup()
{
    pinMode(pin_, OUTPUT);
}

void
Led::turn_on(bool is_on)
{
    digitalWrite(pin_, is_on ? HIGH : LOW);
}
