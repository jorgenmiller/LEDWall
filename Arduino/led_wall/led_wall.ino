#include <Adafruit_NeoPixel.h>

#define LED_PIN    6
#define LED_COUNT 300

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_RGB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
  strip.setBrightness(255);
  color(strip.Color(255,   255,   255));
}

void loop() {
  color(strip.Color(255,   0,   0));
  delay(20);
  color(strip.Color(0,   255,   0));
  delay(20);
  color(strip.Color(0,   0,   255));
  delay(20);

}

void color(uint32_t color) {
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, color);
  }
  strip.show();
}
