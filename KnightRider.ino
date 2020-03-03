/*=========================================================================*/
/*                          Written by James Tanner                        */
/*                  https://www.facebook.com/TheMeroving1an                */
/*                                 IAmOrion                                */
/*                               Version: 1.0                              */
/*=========================================================================*/

#include "Settings.h"
#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMBER_OF_PIXELS, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
}

void loop() {
  kitt();
}

void kitt() {
  int j;

  strip.setPixelColor(pos - 8, 0x100000); // Dark red
  strip.setPixelColor(pos - 7, 0x100000); // Dark red
  strip.setPixelColor(pos - 6, 0x100000); // Dark red
  strip.setPixelColor(pos - 5, 0x800000); // Medium red
  strip.setPixelColor(pos - 4, 0x800000); // Medium red
  strip.setPixelColor(pos - 3, 0x800000); // Medium red
  strip.setPixelColor(pos - 2, 0xFF0000); // Bright red
  strip.setPixelColor(pos - 1, 0xFF0000); // Bright red
  strip.setPixelColor(pos    , 0xFF3000); // Center pixel is brightest
  strip.setPixelColor(pos + 1, 0xFF0000); // Bright red
  strip.setPixelColor(pos + 2, 0xFF0000); // Bright red
  strip.setPixelColor(pos + 3, 0x800000); // Medium red
  strip.setPixelColor(pos + 4, 0x800000); // Medium red
  strip.setPixelColor(pos + 5, 0x800000); // Medium red
  strip.setPixelColor(pos + 6, 0x100000); // Dark red
  strip.setPixelColor(pos + 7, 0x100000); // Dark red
  strip.setPixelColor(pos + 8, 0x100000); // Dark red

  strip.show();
  delay(SPEED);

  for(j=-WIDTH; j<= WIDTH; j++) strip.setPixelColor(pos+j, 0);

  pos += dir;
  if(pos < 0) {
    pos = 1;
    dir = -dir;
  } else if(pos >= strip.numPixels()) {
    pos = strip.numPixels() - 2;
    dir = -dir;
  }
}
