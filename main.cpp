// main.cpp

#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human human1("Player 1");
    Human human2("Player 2");
    Computer computer("Computer");

    Referee referee;

    Player* winner;

    std::cout << "Human vs Human game:\n";
    winner = referee.refGame(&human1, &human2);
    std::cout << "The winner is: " << winner->getName() << "\n\n";

    std::cout << "Human vs Computer game:\n";
    winner = referee.refGame(&human1, &computer);
    std::cout << "The winner is: " << winner->getName() << "\n\n";

    std::cout << "Computer vs Computer game:\n";
    winner = referee.refGame(&computer, &computer);
    std::cout << "The winner is: " << winner->getName() << "\n\n";

    return 0;
}
