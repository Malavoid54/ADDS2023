#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player{
    Player();
    virtual char makeMove() = 0;
    virtual string getName() = 0;
    ~Player();
};
#endif