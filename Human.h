#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>
using namespace std;

class Human : public Player {
    private:
    string thisName;    
    public:
    Human(string thisName = "Human");
        char makeMove();
        string getName();  
}; 
#endif

