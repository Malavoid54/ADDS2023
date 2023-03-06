#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
using namespace std;
#include <string>

class Computer : public Player{
    public:
    char makeMove();
    string getName()
    ~Computer();
};
#endif