#pragma once

#include "stdint.h"

class FakeTemperatureSensor
{
    public:
        FakeTemperatureSensor();
        uint8_t measure();
};