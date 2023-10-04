#ifndef MENU_H
#define MENU_H

#include <Arduino.h>

class Menu {
  private:
    int menu_LEN = 3;
    String menus[3];
    int focusMenu;
    int selectedMenu;
  public:
    Menu(String menus[3]);
    String getMenuText(int num);
    int getFocusMenu();
    int getSelectedMenu();
    void selectMenu();
    void openMenu();
    void prev();
    void next();
};

#endif