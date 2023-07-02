#pragma once
#include "Define.h"

class Color
{
    uint16_t hue;
    uint8_t sat;
    uint8_t val;
    bool fade_up;

public:
    Color();
    Color(uint16_t);

    uint16_t get_hue();
    uint8_t get_sat();
    uint8_t get_val();

    void set_hue(uint16_t);
    void set_val(uint8_t);
    void set_sat(uint8_t);

    void fade();
};