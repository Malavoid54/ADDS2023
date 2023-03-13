#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    int result = compareMoves(move1, move2);

    if (result == 1) {
        return player1;
    }
    else if (result == -1) {
        return player2;
    }
    else {
        return nullptr;
    }
}

int Referee::compareMoves(Move* move1, Move* move2) {
    if (*move1 == *move2) {
        return 0;
    }
    else if (move1->beats(*move2)) {
        return 1;
    }
    else {
        return -1;
    }
}