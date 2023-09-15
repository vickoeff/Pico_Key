#ifndef SWITCH_H
#define SWITCH_H

#include <Arduino.h>

class Switch {
  private:
    uint8_t key;
    byte addressRow;
    byte addressCol;
    int lastSteadyState;
    unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 250;
  public:
    Switch(uint8_t key, byte addressRow, byte addressCol);
    void init();
    void update();
    byte getState();
    uint8_t getKey();
    bool isPressed();
};

#endif