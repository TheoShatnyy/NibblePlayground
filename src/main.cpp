#include <Arduino.h>
#include <Nibble.h>

Display* display;
Sprite* sprite;

void setup() {
  Nibble.begin();

  display = Nibble.getDisplay();
  sprite = display->getBaseSprite();
  sprite->clear(TFT_BLACK);
  sprite->setTextColor(TFT_WHITE);
  sprite->setTextFont(2);
  sprite->setCursor(0,0);
  sprite->print("This is my first program!");
  display->commit();
}
void loop() {
  delay(1000);
}