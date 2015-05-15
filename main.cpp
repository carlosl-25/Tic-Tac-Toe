#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
Board game;

string replay = " ";

while(replay != "q")
{
    int turn = game.playerTurn();

    int choice;
    cout << "\nWhich square do you pick? ";
    cin >> choice;

    game.getChoice(choice, turn);
    game.printBoard();

    int win = game.winner(turn);
    if(win == 0 || win == 1)
    {
        cout << "\nPlayer "<< win+1 << " wins." << endl;
        cout << "Play Again? Or enter q to quit ";
        cin >> replay;
        game.addPoints(win);
        if(replay != "q")
        {
        game.resetGame();
        }
    }
    else if(win == 2)
    {
        cout <<"\nTie" << endl;
        cout << "Play Again? Or enter q to quit ";
        cin >> replay;
        if(replay != "q")
        {
        game.resetGame();
        }
    }

}
game.printScore();

}


