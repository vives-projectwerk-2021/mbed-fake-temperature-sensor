#pragma once

#include "stdint.h"

class FakeTemperatureSensor
{
    public:
        FakeTemperatureSensor();
        int16_t temperature();
};