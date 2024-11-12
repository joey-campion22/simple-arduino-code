#include <Adafruit_CircuitPlayground.h>

bool slideSwitch;
bool leftButtonPressed;
bool rightButtonPressed;
uint8_t pixeln = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();
  if(CircuitPlayground.slideSwitch()){
    CircuitPlayground.setPixelColor(0, 255,0,0);
    CircuitPlayground.setPixelColor(1, 255,0,0);
    CircuitPlayground.setPixelColor(2, 255,0,0);
    CircuitPlayground.setPixelColor(3, 255,0,0);
    CircuitPlayground.setPixelColor(4, 255,0,0);
    CircuitPlayground.setPixelColor(5, 255,0,0);
    CircuitPlayground.setPixelColor(6, 255,0,0);
    CircuitPlayground.setPixelColor(7, 255,0,0);
    CircuitPlayground.setPixelColor(8, 255,0,0);
    CircuitPlayground.setPixelColor(9, 255,0,0);

    delay(500);
    CircuitPlayground.clearPixels();
    delay(500);
  } else {
    CircuitPlayground.clearPixels();
  }
  if(leftButtonPressed){
    CircuitPlayground.setPixelColor(0, 255,0,0);
    CircuitPlayground.setPixelColor(1, 228,127,0);
    CircuitPlayground.setPixelColor(2, 237,220,62);
    CircuitPlayground.setPixelColor(3, 94,239,82);
    CircuitPlayground.setPixelColor(4, 94, 231, 190);
    CircuitPlayground.setPixelColor(5, 94,209,255);
    CircuitPlayground.setPixelColor(6, 94,110,255);
    CircuitPlayground.setPixelColor(7, 165,110,255);
    CircuitPlayground.setPixelColor(8, 255,110,255);
    CircuitPlayground.setPixelColor(9, 255,134,205);
  } else {
    CircuitPlayground.clearPixels();
  }
  if(rightButtonPressed){
    CircuitPlayground.clearPixels();
    CircuitPlayground.speaker.enable(true);
    CircuitPlayground.playTone(500 + pixeln * 500,100);
  }
  

}
