#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer{
    private:
    string move;
    public:
    char dispMove();
    ~Computer();
};
#endif