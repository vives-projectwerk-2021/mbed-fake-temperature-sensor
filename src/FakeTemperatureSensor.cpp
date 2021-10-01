#include "mbed.h"
#include "FakeTemperatureSensor.h"

FakeTemperatureSensor::FakeTemperatureSensor()
{
  srand(time(NULL));
}

uint8_t FakeTemperatureSensor::temperature()
{
    return 17 + (rand() % 10);
}