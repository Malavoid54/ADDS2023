#include <iostream>
#include <string>
#include "Human.h"
using namespace std;


Human::Human(string name){
    thisName = thisName;
}

char Human::makeMove() {
    char moveinput;
    cout<<"Enter move: ";
    cin>> moveinput;
    return moveinput;

}

string Human::getName(){
    string thisName;
    cout << "Please enter your name: ";
    cin >> thisName;
    return thisName;
}