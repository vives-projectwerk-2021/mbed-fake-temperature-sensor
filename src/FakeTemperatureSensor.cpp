#include "mbed.h"
#include "FakeTemperatureSensor.h""

FakeTemperatureSensor::FakeTemperatureSensor()
{
  
}

FakeTemperatureSensor::measure()
{
    uint8_t rand = rand()%10;
    return 17+rand;
}