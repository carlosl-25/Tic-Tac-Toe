#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

#include <string>

using namespace std;
class Score
{

public:
    Score();
    void addPoints(int winner);
    void printScore();

private:

    int player1;
    //player 1 is X.
    int player2;
    //player 2 is O.

};

#endif // SCORE_H_INCLUDED
