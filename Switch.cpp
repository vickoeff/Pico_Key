#include "Switch.h"

Switch::Switch(uint8_t key, byte addressRow, byte addressCol) {
  this->key = key;
  this->addressRow = addressRow;
  this->addressCol = addressCol;
  lastSteadyState = LOW;
  init();
}
void Switch::init() {
  pinMode(addressCol, INPUT_PULLDOWN);
  update();
}
void Switch::update() {
    int newStateRow = digitalRead(addressRow);
    int newStateCol = digitalRead(addressCol);
    int newState;
    
    if (newStateRow && newStateCol) {
      newState = HIGH;
    } else {
      newState = LOW;
    }

    if (newState != lastSteadyState) {
      if ((millis() - lastDebounceTime) < debounceDelay && lastSteadyState) {
        lastDebounceTime = millis();
        // save on press state
        lastSteadyState = newState;
      } else if ((millis() - lastDebounceTime) > debounceDelay) {
        lastDebounceTime = millis();
        // save on release state
        lastSteadyState = newState;
      }
    }
}
byte Switch::getState() {
  update();
  return lastSteadyState;
}
bool Switch::isPressed() {
  return (getState() == HIGH);
}
uint8_t Switch::getKey() {
  return key;
}
