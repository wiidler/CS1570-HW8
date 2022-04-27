#ifndef DECKCLASS_H  
#define DECKCLASS_H

#include "cardclass.h"
#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function: Deck();
// Description: A constructor that initializes a full deck of 52 cards
// Pre: None
// Post: A fully initialized Card array and deck size

// Function: Deck(Card array[], int arraySize);
// Description: A constructor that creates a Deck array and size from a given array and size
// Pre: A card array and number of cards in the array
// Post: A deck corresponding to the card array

// Function: Card getCard(int index) const;
// Description: Returns Card info at given index
// Pre: A card array and index input
// Post: A card variable

// Function: int getDeckSize() const;
// Description: Returns the current deck size
// Pre: An initialized deck
// Post: An integer corresponding to number of remaining non-destroyed cards

// Function: void destroyCard();
// Description: Decrements m_deckSize
// Pre: An initialized deck
// Post: m_deckSize is decremented by 1

// Function: void addCard();
// Description: increments m_deckSize
// Pre: An initialized Deck
// Post: m_deckSize is incremented by 1

// Function: void shuffle(int arraySize);
// Description: Randomly shuffles the given Deck
// Pre: An initialized deck and given deck size
// Post: A randomly shuffled deck replaces the previous deck

/***********************CLASS DEFINITIONS***********************/
class Deck{
    public:
        // Constructors
        Deck();
        Deck(Card array[], int arraySize);
        // Getter Functions
        Card getCard(const int index) const;
        int getDeckSize() const;
        // Member Functions
        void destroyCard();
        void addCard();
        void shuffle(const int arraySize);
    private:
        int m_deckSize;
        Card m_deck[MAXARRAY];
};
#endif