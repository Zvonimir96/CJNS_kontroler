#pragma once
#include "Define.h"
#include "Figure.h"
#include "House.h"
#include "Touch.h"
#include "Path.h"
#include "SafeHouse.h"

class Player
{
    Color static available_colors[];
    Color color;
    House house;
    Figure figures[4];
    unsigned long time_to_update; // MAKNUTI SVE VEZANO ZA UPDATE

public:
    int8_t color_number;
    Touch touch;
    SafeHouse sHouse;
    int8_t selected_figure_index;
    int8_t player_number;
    bool playable;
    void set_start_pat();

    Player();

    void init(uint8_t);

    void set_figures_color();
    void change_color_number_right();
    void change_color_number_left();

    void select_figure();
    void next_figure_left();
    void next_figure_right();

    void disable();
    void action();
    uint8_t get_color_number();
    Color get_color();
};