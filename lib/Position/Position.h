#pragma once
#include "Arduino.h"

enum Component {component_house, component_path, component_safe_house, component_none};

struct Position{
    Component component;
    uint8_t index;
};