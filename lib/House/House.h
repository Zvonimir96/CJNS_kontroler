#pragma once
#include "Define.h"
#include "Elements.h"
#include "Color.h"

class House{
    uint8_t pixels[4];
    
public:
    uint8_t exit_index;

    House();

    void init(uint8_t);
    void turn_on(uint8_t, Color);
    void turn_off(uint8_t);
};