#include "Computer.h"
#include <cstdlib>

Move* Computer::makeMove() {
    int moveIndex = rand() % numMoves;
    return moves[moveIndex]->clone();
}

std::string Computer::getName() {
    return name;
}
