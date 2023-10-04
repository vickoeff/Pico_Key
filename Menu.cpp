#include "Menu.h"

Menu::Menu(String menus[3]) {
  for(int i = 0; i < 3; i++) {
    this->menus[i] = menus[i];
  }
  focusMenu = 0;
  selectedMenu = 0;
}
String Menu::getMenuText(int num) {
  return menus[num];
}
int Menu::getFocusMenu() {
  return focusMenu;
}
int Menu::getSelectedMenu() {
  return selectedMenu;
}
void Menu::selectMenu() {
  selectedMenu = focusMenu;
}
void Menu::openMenu() {
  selectedMenu = -1;
}
void Menu::prev() {
  if(focusMenu <= 0) {
    focusMenu = menu_LEN-1;
  } else {
    focusMenu--;
  }
}
void Menu::next() {
  if(focusMenu+1 >= menu_LEN) {
    focusMenu = 0;
  } else {
    focusMenu++;
  }
}
