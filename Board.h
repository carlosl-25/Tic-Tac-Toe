#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include "Score.h"

class Board : public Score
{

public:

    Board();
    ~Board();
    void printBoard();
    void resetGame();
    void getChoice(int choice, int player);
    bool playerTurn();
    int winner(int player);

private:
    //inheriting from class that keeps player functions
    //note to self: consider renaming score to player class
    Score players;

    int boardSize = 9;
    char *board;
};

#endif // BOARD_H_INCLUDED
