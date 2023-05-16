#pragma once
#include "Define.h"
#include "Color.h"
#include <Adafruit_NeoPixel.h>

class Strip{
    Adafruit_NeoPixel *strip;

public:
    Strip(uint16_t , uint16_t);

    void clear();
    void set_pixel_color(uint8_t, Color);
    void fill(Color);
    void turn_off(uint8_t);
    void show();
};