#pragma once
#include "Arduino.h"

#define BUZZER 10

#define PATH_PIN 4
#define DICE_PIN 5
#define HOUSE_PIN 6
#define TOUCHPAD_PIN 7
#define SAFE_HOUSE_PIN 8

#define PATH_COUNT 52
#define DICE_COUNT 9
#define HOUSE_COUNT 16
#define SAFE_HOUSE_COUNT 16
#define TOUCH_COUNT 12

#define BRIGHTNESS 50

#define ANIMATION_ITERATIONS 30
#define ANIMATION_MIN_DELAY 10
#define ANIMATION_DELAY_INKREMENT 5

#define PLAYER1_LEFT 1 << 1
#define PLAYER1_SUBMIT 1 << 0
#define PLAYER1_RIGHT 1 << 2

#define PLAYER2_LEFT 1 << 4
#define PLAYER2_SUBMIT 1 << 3
#define PLAYER2_RIGHT 1 << 5

#define PLAYER3_LEFT 1 << 7
#define PLAYER3_SUBMIT 1 << 6
#define PLAYER3_RIGHT 1 << 8

#define PLAYER4_LEFT 1 << 10
#define PLAYER4_SUBMIT 1 << 9
#define PLAYER4_RIGHT 1 << 11

#define DICE_BUTTON 4096

#define INTERRUPT_PIN 2

#define COLORS 6

// Color
#define UPDATE_FADE_STEP 5

#define UPDATE_TIME_MS 40
#define UPDATE_FADE_MIN 150