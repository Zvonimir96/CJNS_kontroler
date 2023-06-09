#pragma once
#include "Elements.h"
#include "Color.h"

class SafeHouse
{

public:
    Color *color;
    uint8_t pixels[4];

    void init(uint8_t, Color *);
    void turn_on();
    void turn_off();
};