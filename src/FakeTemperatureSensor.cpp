#include "mbed.h"
#include "FakeTemperatureSensor.h"

FakeTemperatureSensor::FakeTemperatureSensor()
{
  srand(time(NULL));
}

/** simulate a temperature measurement
 *  @return temperature * 256
 */
int16_t FakeTemperatureSensor::temperature()
{
    return (rand() % 14080)-3840;     //  [-3840, 10240] ~ [-15°C, 40°C]
}