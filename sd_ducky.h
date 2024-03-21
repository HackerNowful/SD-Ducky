/*
  Hacker Nowful
*/

#ifndef sd_ducky_h
#define sd_ducky_h

#include <Arduino.h>
#include <SPI.h>
#include <SD.h>
#include "Keyboard.h"


void Line(String l);
void Press(String b);
void activateducky(const char* filename);

#endif
