#include <iostream>
#include <string>
#include "Human.h"
using namespace std;


char Human::makeMove() {
    char moveinput;
    cout<<"Enter move: ";
    cin>> moveinput;
    return moveinput;

}

string Human::getName(){
    string humanName;
    cout << "Please enter your name: ";
    cin >> humanName;
    return name;
}