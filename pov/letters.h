#ifndef letters_h
#define letters_h

#include <Arduino.h>

#define WIDTH 5
#define HEIGHT 8

extern byte letters[128][WIDTH];

void init_letters();

#endif
