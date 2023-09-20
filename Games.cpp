#include "Games.h"

Games::Games() {
  focusGame = 0;
  selectedGame = 0;
}
String Games::getGameTitle(int num) {
  return listGame[num];
}
int Games::getFocusGame() {
  return focusGame;
}
int Games::getSelectedGame() {
  return selectedGame;
}
void Games::selectGame() {
  selectedGame = focusGame;
}
void Games::openListGame() {
  selectedGame = -1;
}
void Games::prev() {
  if(focusGame <= 0) {
    focusGame = Game_LEN-1;
  } else {
    focusGame--;
  }
}
void Games::next() {
  if(focusGame+1 >= Game_LEN) {
    focusGame = 0;
  } else {
    focusGame++;
  }
}
