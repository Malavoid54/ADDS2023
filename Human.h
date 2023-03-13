#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human(std::string name) : Player(name) {}
    Move* makeMove();
    std::string getName();
};

#endif
