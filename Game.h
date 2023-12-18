#ifndef GAME_H
#define GAME_H

#include "Board.h"

class Game {
public:
    Game();
    void play();

private:
    Board board;
    char currentPlayer;
    bool gameWon;

    void switchPlayer();
    void printResult(char result) const;
};

#endif 

