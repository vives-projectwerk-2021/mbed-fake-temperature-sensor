#pragma once

#include "stdint.h"

class FakeTemperatureSensor
{
    public:
        FakeTemperatureSensor();
        uint16_t temperature();
};