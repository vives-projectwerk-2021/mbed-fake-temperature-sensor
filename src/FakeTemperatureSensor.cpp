#include "mbed.h"
#include "FakeTemperatureSensor.h"

FakeTemperatureSensor::FakeTemperatureSensor()
{
  srand(time(NULL));
}

uint16_t FakeTemperatureSensor::temperature()
{
    return 17 + (rand() % 10);
}