#include "Computer.h"
#include "Move.h"

#include <cstdlib>
#include <ctime>

Computer::Computer(const std::string& name) : Player(name) {
    // seed the random number generator with the current time
    std::srand(std::time(nullptr));
}

Move* Computer::makeMove() {
    // randomly select a move
    int choice = std::rand() % 5;
    switch (choice) {
        case 0:
            return new Rock();
        case 1:
            return new Paper();
        case 2:
            return new Scissors();
        case 3:
            return new Monkey();
        case 4:
            return new Robot();
        case 5:
            return new Pirate();
        case 6:
            return new Ninja();
        case 7:
            return new Zombie();
        default:
            return nullptr; // this should never happen
    }
}
