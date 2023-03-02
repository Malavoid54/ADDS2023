#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player{
    private:
    string name;
    public:
    char makeMove();
    string getName();
    ~Player();
};
#endif