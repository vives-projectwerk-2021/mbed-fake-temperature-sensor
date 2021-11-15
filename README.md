# mbed-fake-temperature-sensor

In this repository you find a library that will give you a random value that simulates the output of a temperature sensor.

## Usage of library

### Make instance of the class

To use this library you first need to make an instance of the class. You don't need to give extra information to the class.

### Use the method temperature()

To get a value of the sensor you can just call the method temperature() on your instance. When you use the method temperature() you get a value with a type uint16_t. This value isn't the real temperature. To get the real temperature, you must divide the value by 256. The result is within the range of 17 to 27.

### Why this library

This library was made for the pulu project in the development phase.
