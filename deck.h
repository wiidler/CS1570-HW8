#ifndef DECK_H  
#define DECK_H

#include "card.h"
#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function: 
// Description: 
// Pre: 
// Post: 


/***********************CLASS DEFINITIONS***********************/
class Deck{
    public:
        // Constructors
        Deck();
        Deck(Card array[], int arraySize);
        // Member Functions
        void shuffle(int arraySize);
        // Getter Functions
        Card getCard(int index);
        Card getDeck();
    private:
        Card m_deck[MAXARRAY];
        int m_deckSize;
};
#endif