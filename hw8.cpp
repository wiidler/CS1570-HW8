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
    Card player1Hand[MAXHAND];
    Card player2Hand[MAXHAND];
    int j = 0;
    int k = 0;
    for(int i = 0; i < MAXARRAY; i++){
        if(!(i % 2)){
            player1Hand[j] = playDeck.getCard(i);
            j++;
        }
        else if(i % 2){
            player2Hand[k] = playDeck.getCard(i);
            k++;
        }
    }
    Deck player1Deck(player1Hand, HALFDECK);
    Deck player2Deck(player2Hand, HALFDECK);
    cout << endl << "Battle commence!" << endl << endl;
    int i = 0;
    j = 0;
    while((player1Deck.getDeckSize() > 10) || (player2Deck.getDeckSize() > 10)){
        if(player1Hand[i].getDestroyed() || player2Hand[j].getDestroyed()){
        // Progresses cards if current one is destroyed
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
        }
        else{
            cout << player1Hand[i] << " " << player2Hand[j] << " ";
            // Compare cards
            if(((player1Hand[i] + player2Hand[j]) == 11) || (player1Hand[i] == player2Hand[j])){
                player1Deck.destroyCard();
                ~player1Hand[i];
                player2Deck.destroyCard();
                ~player2Hand[j];
                cout << "- Destroyed" << endl;
            }
            else if(player1Hand[i].getSuit() != player2Hand[j].getSuit());
                if(player1Hand[i] > player2Hand[j]){
                    player2Deck.destroyCard();
                    ~player2Hand[j];
                    cout << player1Name << " WINS!" << endl;
                }
                else if((player1Hand[i] > player2Hand[j]) ==  false){
                    player1Deck.destroyCard();
                    ~player1Hand[i];
                    cout << player2Name << " WINS!" << endl;
                }
            else if(player1Hand[i].getSuit() == player2Hand[j].getSuit()){
                cout << "THIS SHOULD APPEAR! please :c" << endl;
                if(player1Hand[i] < player2Hand[j]){
                    player2Deck.destroyCard();
                    ~player2Hand[j];
                    cout << player1Name << " WINS!" << endl;
                }
                else if((player1Hand[i] < player2Hand[j]) == false){
                    player1Deck.destroyCard();
                    ~player1Hand[i];
                    cout << player2Name << " WINS!" << endl;
                }
            }
        }
    }
    cout << "-GAME OVER-" << endl << endl;
    if(player1Deck.getDeckSize() <= 10){
        cout << "Congratulations " << player2Name << ", you have won! Enjoy your new country!";
    }
    else if(player2Deck.getDeckSize() <= 10){
        cout << "Congratulations " << player1Name << ", you have won! Enjoy your new country!";
    }
    
    return 0;
}