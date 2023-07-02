#pragma once
#include "Define.h"
#include "Elements.h"
#include "Color.h"

class Path
{
    static Color default_color;

public:
    static void turn_on(uint8_t, Color);
    static void turn_off(uint8_t);
    static void init();
};