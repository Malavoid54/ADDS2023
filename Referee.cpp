#include "Referee.h"
#include "Move.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2)
{
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    // determine the winner based on the moves
    int result = move1->compete(move2);

    Player* winner = nullptr;
    if (result == 1)
    {
        winner = player1;
    }
    else if (result == -1)
    {
        winner = player2;
    }

    // clean up memory
    delete move1;
    delete move2;

    // return the winner
    return winner;
}
