// Programmer: Will Weidler
// ID: wawq97
// Date: 4/21/22
// File: hw7.cpp
// Assignment: HW 8
// Purpose: This program contains WAR, a simple two player card game.

#include "cardclass.h"
#include "deckclass.h"
#include <iostream>
using namespace std;

int main(){
    srand(469);
    string player1Name = "";
    string player2Name = "";
    cout << "This is war!" << endl;
    cout << "Input defender name:" << endl;
    cin >> player1Name;
    cout << endl << "Input attacker name:" << endl;
    cin >> player2Name;
    Deck playDeck;
    playDeck.shuffle(MAXARRAY);
    cout << endl << "Battle commence!" << endl;
    return 0;
}