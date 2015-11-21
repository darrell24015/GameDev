/*
 * sPleLunk!
 * Author: Darrell Little - UselessApps.net
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 */

#include <SPI.h>
#include <audio.h>
#include <Arduboy.h>
#include <core.h>
#include <EEPROM.h>


Arduboy arduboy;

void intro() {
  for(int i = -8; i < 45; i = i + 2)
  {
    arduboy.clearDisplay();
    arduboy.setCursor(20, i);
    arduboy.print("THIS IS ARDUBOY!");
    arduboy.display();
    // Need small delay, scrolls too fast!
    delay(75);
  }

  arduboy.tunes.tone(987, 160);
  delay(160);
  arduboy.tunes.tone(1318, 400);
  delay(2000);
}

void setup() {
  arduboy.start();
  arduboy.setFrameRate(60);
  arduboy.setCursor(29, 22);
  arduboy.print("Hello World!");
  arduboy.display();
  delay(1500);
  intro();
  

}

void loop() {
  

}
