#pragma once
#include "Color.h"
#include "House.h"
#include "Path.h"
#include "Dice.h"
#include "Position.h"
#include "Animator.h"

class Figure{
    static Figure *figures[];
    static uint8_t figure_number;
    Color *color;
    House *house;
    Position position;
    Position next_position;

public:
    Figure();

    void init(Color*, House*, uint8_t);

    void update_color();

    void set_color(Color color);
    void disable();

    bool can_move();
    void move();

    static Figure *figure_on_index(Position);
};