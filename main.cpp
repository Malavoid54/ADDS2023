#include "Player.h"
#include "Human.h"
#include "Referee.h"
#include "Computer.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
    Referee referee1;
    Human one("human");
    Computer computer;
    Player* winner = referee1.refGame(&one, &computer);
    if (winner == &one) {
        cout << one.getName() << "Wins" << endl;
    } else if (winner == &computer) {
        cout <<computer.getName() << "Wins" << endl;
    } else {
        cout<< "Tie" << endl;
    }
    return 0;
}
