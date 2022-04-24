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
    Card player1Hand[HALFDECK] = {};
    Card player2Hand[HALFDECK] = {};
    for(int i = 0; i < MAXARRAY; i++){
        if(!(i % 2)){
            player1Hand[i] = playDeck.getCard(i);
        }
        else if(i % 2){
            player2Hand[i] = playDeck.getCard(i);
        }
    }
    Deck player1Deck(player1Hand, HALFDECK);
    Deck player2Deck(player2Hand, HALFDECK);
    cout << endl << "Battle commence!" << endl << endl;
    int i = 0;
    int j = 0;
    while((player1Deck.getDeckSize() > 10) || (player2Deck.getDeckSize() > 10)){
        while(player1Hand[i].getDestroyed()){
            i++;
            if (i >= player1Deck.getDeckSize()){
                i=0;
            }
        }
        while(player2Hand[j].getDestroyed()){
            j++;
            if (i >= player2Deck.getDeckSize()){
                j=0;
            }
        }
        cout << player1Hand[i] << " " << player2Hand[j] << endl;
        if((player1Hand[i] + player2Hand[j]) == 11){
            i++;
            j++;
            cout << " - Destroyed";
        }
        else if(player1Hand[i] > player2Hand[j]){
            j++;
            
        }
    }
    return 0;
}