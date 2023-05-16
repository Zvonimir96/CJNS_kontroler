#include "Strip.h"

Strip::Strip(uint16_t  numberOfPixels, uint16_t  pinNumber){
    strip = new Adafruit_NeoPixel(numberOfPixels, pinNumber, NEO_GRB + NEO_KHZ800);
    strip->begin();
    strip->setBrightness(BRIGHTNESS);
}

void Strip::clear(){
    strip->clear();
    strip->show();
}

void Strip::fill(Color color){
    for(unsigned int i=0; i<strip->numPixels(); i++)
        strip->setPixelColor(i, strip->gamma32(strip->ColorHSV(color.get_hue(), color.get_sat(), color.get_val())));

    strip->show();
}

void Strip::set_pixel_color(uint8_t index, Color color){
    strip->setPixelColor(index, strip->gamma32(strip->ColorHSV(color.get_hue(), color.get_sat(), color.get_val())));
}

void Strip::turn_off(uint8_t index){
    strip->setPixelColor(index, strip->gamma32(strip->ColorHSV(0, 0, 0)));
}

void Strip::show(){
    strip->show();
}