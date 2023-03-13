#pragma once
#include "Move.h"

class Player {
public:
    virtual ~Player() {}
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};
