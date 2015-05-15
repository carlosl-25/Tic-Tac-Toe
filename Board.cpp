#include <iostream>
#include "Board.h"
#include <ctime>
#include <cstdlib>

Board::Board()
{
    board = new char[boardSize];
    board[0] = '1';
    board[1] = '2';
    board[2] = '3';
    board[3] = '4';
    board[4] = '5';
    board[5] = '6';
    board[6] = '7';
    board[7] = '8';
    board[8] = '9';
    this->printBoard();

}

Board::~Board()
{
    delete [] board;
}

void Board::printBoard()
{
    cout << endl;
    cout << board[0] << '|' << board[1] << '|' << board[2] << endl;
    cout << "-----" << endl;
    cout << board[3] << '|' << board[4] << '|' << board[5] << endl;
    cout << "-----" << endl;
    cout << board[6] << '|' << board[7] << '|' << board[8] << endl;
}

//getChoice fills in letter for box.
void Board::getChoice(int choice, int player)
{
    while(choice < 1 || choice > 9 )
    {
        cout << "\nPick a number on the Board!" << endl;
        cin >> choice;
    }

    if(board[choice-1] == 'X' || board[choice-1] == 'O')
    {
        cout << "Pick again! " << endl;
        cin >> choice;
        getChoice(choice, player);
    }
    else
    {
        if(player == 0)
        {
            board[choice-1] = 'X';
        }
        else{
            board[choice-1] = 'O';
        }
    }
}

//Randomly decides who goes first and then alternates between players
bool Board::playerTurn()
{
    srand(time(0));
    static int randomPlayer;
    static int x = 1;

    while(x == 1)
    {
        x++;
        randomPlayer = rand() % 2;
        if(randomPlayer == 0)
        {
            return false;
        }
        return true;
    }

    if(randomPlayer == 0)
    {
        randomPlayer = 1;
        return true;
    }
    else{
        randomPlayer = 0;
        return false;
    }
}

//checks to see if someone has won or tied.
int Board::winner(int player)
{
    char lob= NULL;
    //lob is the letter on the board.

    if(player == 0)
    {
        lob = 'X';
    }
    else{
        lob = 'O';
    }


    if(board[0] == lob && board[1] == lob && board[2] == lob)
    {
        if(lob == 'X')
        {
            return 0;
        }
        return 1;

    }
    else if(board[3] == lob && board[4] == lob && board[5] == lob)
    {
        if(lob == 'X')
        {
            return 0;
        }
        return 1;

    }
    else if(board[6] == lob && board[7] == lob && board[8] == lob)
    {
        if(lob == 'X')
        {
            return 0;
        }
        return 1;

    }
    else if(board[0] == lob && board[3] == lob && board[6] == lob)
    {
        if(lob == 'X')
        {
            return 0;
        }
        return 1;

    }
    else if(board[1] == lob && board[4] == lob && board[7] == lob)
    {
        if(lob == 'X')
        {
            return 0;
        }
        return 1;

    }
    else if(board[2] == lob && board[5] == lob && board[8] == lob)
    {
        if(lob == 'X')
        {
            return 0;
        }
        return 1;

    }
    else if(board[0] == lob && board[4] == lob && board[8] == lob)
    {
        if(lob == 'X')
        {
            return 0;
        }
        return 1;

    }
    else if(board[2] == lob && board[4] == lob && board[6] == lob)
    {
        if(lob == 'X')
        {
            return 0;
        }
        return 1;

    }
    else if(board[0] != '1' && board[1] != '2' && board[2]!= '3' & board[3] != '4'
            && board[4]!= '5' && board[5] != '6' && board[6] != '7' && board[7] != '8' &&
            board[8] != '9')
            {
                return 2;
            }
    return -1;
}

void Board::resetGame()
{
    board[0] = '1';
    board[1] = '2';
    board[2] = '3';
    board[3] = '4';
    board[4] = '5';
    board[5] = '6';
    board[6] = '7';
    board[7] = '8';
    board[8] = '9';
    this->printBoard();
}
