#include "Referee.h"

Referee::Referee() {

}

Player* Referee::refGame(Player * player1, Player * player2); {
    char p1move = player1->makeMove();
    char p2move = player2->makeMove();
    if ((p1move == p2move) || (p2move == p1move)){
        return nullptr; // tie
    }else if ((p1move == "R" && p2move == "S") || (p1move == "S" && p2move == "P") || (p1move == "P" && p2move =="R")){
        return player1;
    }
    else if ((p2move == "R" && p1move == "S") || (p2move == "S" && p1move == "P") || (p2move == "P" && p1move == "R")) {
        return player2;
    } else {
        return nullptr; // not working
    }


}