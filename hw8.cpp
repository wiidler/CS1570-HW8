// Programmer: Will Weidler
// ID: wawq97
// Date: 4/21/22
// File: hw7.cpp
// Assignment: HW 8
// Purpose: This program contains WAR, a simple two player card game.

#include "constants.h"
#include "deck.h"
#include "card.h"
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
    cout << endl << "Battle commence!" << endl;
    Deck playDeck;
    for(int i = 0; i < MAXARRAY; i++){
        cout << playDeck.getCard(i);
    }
    playDeck.shuffle(MAXARRAY);
    for(int i = 0; i < MAXARRAY; i++){
        cout << playDeck.getCard(i);
    }
    return 0;
}