// Referee.h
#pragma once
#include "Player.h"

class Referee {
public:
    Referee() {}
    virtual Player* refGame(Player* player1, Player* player2);
};
