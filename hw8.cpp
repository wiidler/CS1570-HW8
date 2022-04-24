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
    Card player1Hand[HALFDECK] = {};
    Card player2Hand[HALFDECK] = {};
    for(int i = 0; i < HALFDECK; i++){
        if(!(i % 2)){
            player1Hand[i] = playDeck.getCard(i);
            cout << player1Hand[i] << " PLAYER 1's" << endl;
        }
        else if(i % 2){
            player2Hand[i] = playDeck.getCard(i);
            cout << player2Hand[i] << " PLAYER 2's" << endl;
        }
    }

    return 0;
}