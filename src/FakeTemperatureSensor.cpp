#include "mbed.h"
#include "FakeTemperatureSensor.h"

FakeTemperatureSensor::FakeTemperatureSensor()
{
  
}

uint8_t FakeTemperatureSensor::measure()
{
    uint8_t rand = rand()%10;
    return 17+rand;
}