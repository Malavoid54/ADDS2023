#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
using namespace std;
#include <string>

class Computer : public Player{
    private:
    string thisName = "Computer";
    char compMove = "R";
    
    public:
    Commputer();
    char makeMove();
    string getName()
    ~Computer();
};
#endif