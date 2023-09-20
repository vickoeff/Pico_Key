#ifndef GAMES_H
#define GAMES_H

#include <Arduino.h>

class Games {
  private:
    int Game_LEN = 3;
    String listGame[3] = {"Flappy Bird", "Snake", ""};
    int focusGame;
    int selectedGame;
  public:
    Games();
    String getGameTitle(int game);
    int getFocusGame();
    int getSelectedGame();
    void selectGame();
    void openListGame();
    void prev();
    void next();
};

#endif