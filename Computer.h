#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
using namespace std;
#include <string>

class Computer : public Player{
    private:
    string thisName = "Computer";
    char compMove = 'R';
    
    public:
    char makeMove();
    string getName();
};
#endif