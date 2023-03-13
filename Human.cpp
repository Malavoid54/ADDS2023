// Human.cpp
#include "Human.h"
#include "Move.h"

Move* Human::makeMove() {
    std::string moveName;
    std::cout << "Enter Move: ";
    std::cin >> moveName;

    // Create corresponding Move object
    if (moveName == "Rock") {
        return new Rock();
    }
    else if (moveName == "Paper") {
        return new Paper();
    }
    else if (moveName == "Scissors") {
        return new Scissors();
    }
    else if (moveName == "Robot") {
        return new Robot();
    }
    else if (moveName == "Monkey") {
        return new Monkey();
    }
    else if (moveName == "Pirate") {
        return new Pirate();
    }
    else if (moveName == "Ninja") {
        return new Ninja();
    }
    else if (moveName == "Zombie") {
        return new Zombie();
    }
    else {
        std::cerr << "Invalid move name: " << moveName << std::endl;
        return nullptr;
    }
}
