using namespace std;
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Move.h"
#include "Referee.h"


#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>



using namespace std;

int main()
{
    // Set up the game
    Referee referee;
    Human humanPlayer;
    Computer computerPlayer;

    // Play a round
    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    // Output the winner's name
    cout << winner->getName() << " wins!" << endl;

    return 0;
}
