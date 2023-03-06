#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>
using namespace std;

class Human : public Player {
    public:
        char makeMove();
        string getName();  
}; 
#endif

