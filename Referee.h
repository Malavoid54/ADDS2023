#ifndef REFREEE_H
#define REFEREE_H
#include <string>
using namespace std;
#include "Player.h"

class Referee{
    public:
        Referee();
        Player * refGame(Player * player1, Player * player2);

};
#endif
