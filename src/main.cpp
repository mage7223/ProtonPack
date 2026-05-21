#include <FastLED.h>

#define NUM_LEDS 10     // Number of LEDs in your strip
#define DATA_PIN 11      // The digital pin connected to the strip

CRGB leds[NUM_LEDS];    // Define the array of leds

void setup() { 
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32-S3!");
  // Initialize the library for WS2812B LEDs
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50); // Set global brightness (0-255)
}

void loop() { 
    // 1. Set colors in the array
    leds[0] = CRGB::Blue1;
    for(int i = 0; i < NUM_LEDS; i++) {
        leds[i] = CRGB::Blue1; // Set all LEDs to blue
        // 2. Push the data to the strip
        FastLED.show(); 
        delay(100);
    }
    for(int i = NUM_LEDS - 1; i >= 0; i--) {
        leds[i] = CRGB::Black; // Set all LEDs to black
        // 2. Push the data to the strip
        FastLED.show();
        delay(100);
    }
    
    delay(500); 
    
}

