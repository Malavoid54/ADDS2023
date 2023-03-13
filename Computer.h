#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
private:
    int numMoves;
    Move** moves;
public:
    Computer(std::string name, int numMoves, Move** moves) : Player(name), numMoves(numMoves), moves(moves) {}
    Move* makeMove();
    std::string getName();
};

#endif
