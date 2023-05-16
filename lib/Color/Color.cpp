#include "Color.h"

Color::Color(){
    hue = 0;
    sat = 255;
    val = 255;
}

Color::Color(uint16_t hue){
    this->hue = hue;
    sat = 255;
    val = 255;
}

void Color::set_hue(uint16_t hue){
    this->hue = hue;
}

void Color::set_val(uint8_t val){
    this->val = val;
}

void Color::set_sat(uint8_t sat){
    this->sat = sat;
}

void Color::fade(){
    if(fade_up)
        val+=UPDATE_FADE_STEP;    
    else
        val-=UPDATE_FADE_STEP;

    if(val <= UPDATE_FADE_MIN) {
        fade_up = true;
        val = UPDATE_FADE_MIN;
    }
    else if(val >= 255) {
        fade_up = false;
        val = 255;
    }
}

uint16_t Color::get_hue(){
    return hue;
}

uint8_t Color::get_sat(){
    return sat;
}

uint8_t Color::get_val(){
    return val;
}