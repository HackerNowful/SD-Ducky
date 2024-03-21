/*
 * Author    : Hacker Nowful
 * Title     : HID Attack With Sdcard
  
 * Insta     : mr_white_hat._
 * Youtube   : Hacker Nowful
 * Website   : www.hypesecinfotech.com
 * Usage :-
 *        Hi Guys It's an SDcard based HID attack [ Rubber Ducky ] Device,  
 *        you can Directly use an Ducky Scripts here with an sd card options  
 *        
 *  Connection :
 *  pro micro -  Sdcard
 *       D4   -   CS
 *       D15  -   SCK
 *       D16  -   MOSI
 *       D14  -   MISO
 *       VCC  -   VCC
 *       GND  -   GND
 *       
 *  Needed Library
 *  Keyboard.h
 *  SD.h
 *  SPI.h
 */
 
#include "sd_ducky.h"
void setup() {
  activateducky("script.txt");
}

void loop() {
  // nothing need here when Nowful is here
}
