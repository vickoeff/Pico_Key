#ifndef MENU_H
#define MENU_H

#include <Arduino.h>

class Menu {
  private:
    int menu_LEN = 3;
    String menus[3] = {"Keyboard", "Mini Games", "Setting"};
    int focusMenu;
    int selectedMenu;
  public:
    Menu();
    String getMenuText(int num);
    int getFocusMenu();
    int getSelectedMenu();
    void selectMenu();
    void openMenu();
    void prev();
    void next();
};

#endif