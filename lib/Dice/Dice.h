#pragma once
#include "Define.h"
#include "Elements.h"
#include "Color.h"

class Dice{
    static void set_number();
    static uint8_t apply_rotation(uint8_t);
    static unsigned long time_to_update;

public:
    static uint8_t rotation;
    static bool animation;
    static Color color;
    static int8_t number;

    static void roll();
    static void turn_on();
    static void turn_off();
    static void update();
};