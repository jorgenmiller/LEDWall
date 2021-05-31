#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#include "bitmaps.h"

#define PIN 6
#define WIDTH 20
#define HEIGHT 15

const int LEDS = WIDTH*HEIGHT;

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(
  WIDTH, HEIGHT, PIN,
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT +
  NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
  NEO_RGB + NEO_KHZ800);

// Bitmaps:
// mona_lisa, starry_night_pixelated, girl_pearl_earring, great_wave_custom
// usa_flag, heart, creebet

int i = 0;
const uint16_t *bitmaps[] = {mona_lisa, starry_night_pixelated, girl_pearl_earring, great_wave_custom};

void setup() {
  matrix.begin();
  matrix.setBrightness(255);
}

void loop() {
  matrix.fill(0x0000);
  matrix.drawRGBBitmap(0, 0, bitmaps[i], 20, 15);
  matrix.show();
  delay(10*1000);

  i++;
  if (i >= sizeof(bitmaps) / sizeof(bitmaps[0])) {
    i = 0;
  }
}
