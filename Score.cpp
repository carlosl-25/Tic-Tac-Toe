#include <iostream>
#include "Score.h"

Score::Score()
{
    player1 = 0;
    player2 = 0;
}

void Score::addPoints(int winner)
{
    if(winner == 0)
    {
        player1++;
    }
    else if(winner == 1)
    {
        player2++;
    }
}

void Score::printScore()
{
    cout << "\nPlayer 1 won " << player1 << " times. "<< endl;
    cout << "Player 2 won " << player2 << " times. "<< endl;

}
