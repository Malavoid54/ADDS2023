#pragma once
#include "Player.h"
#include <iostream>

class Human : public Player {
public:
    Human(const std::string& name) : name(name) {}
    virtual Move* makeMove() override;
    virtual std::string getName() override { return name; }
private:
    std::string name;
};

