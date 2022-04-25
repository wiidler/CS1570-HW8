#ifndef CARDCLASS_H
#define CARDCLASS_H

#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function: Card(){};
// Description: A constructor that does nothing
// Pre: None
// Post: None

// Function: Card(char value, char suit);
// Description: A constructor creates a card and assigns the m_value to the given value and m_suit to the given suit
// Pre: A character value and suit
// Post: An initialized Card

// Function: bool getDestroyed() const;
// Description: Checks if a card is destroyed (m_destroyed == true)
// Pre: An initialized card
// Post: A truth value corresponding to the status of the card

// Function: char getSuit() const;
// Description: Returns the suit of the card that calls this function
// Pre: An initialized card
// Post: A character that corresponds to the suit of the card

// Function: char getValue() const;
// Description: Returns the value of the card that calls this function
// Pre: An initialized card
// Post: A character that corresponds to the value of the card

// Function: int operator+(Card & card) const;
// Description: An overloaded operator that adds the values of the two cards
// Pre: Two initialized cards
// Post: Returns an int corresponding to the sum of the two cards

// Function: bool operator>(const Card & card) const;
// Description: An overloaded operator that checks if the first card's value is greater than the second
// Pre: Two initialized Cards
// Post: Returns true if the first is greater than the second and false if not

// Function: bool operator<(const Card & card) const;
// Description: An overloaded operator that checks if the first card's value is less than the second
// Pre: Two initialized Cards
// Post: Returns true if the first is less than the second and false if not

// Function: bool operator==(const Card & card) const;
// Description: An overloaded operator that checks if the first card's value is equal to the second
// Pre: Two initialized cards
// Post: Returns true if the first is equal to the second and false if not

// Function: bool operator!=(const Card & card) const;
// Description: An overloaded operator that checks if the first card's value is not equal to the second
// Pre: Two initialized cards
// Post: Returns false if the first is equal to the second and true if not

// Function: void operator~();
// Description: An overloaded operator that destroys a card
// Pre: An initialized card
// Post: The Card's m_destroyed value is set to true

// Function: friend int getDestroyedIndex(Card array[MAXARRAY]);
// Description: A function that returns the index corresponding to the first destroyed card in the deck
// Pre: A Card array
// Post: The index of the first destroyed card

// Function: friend ostream & operator<<(ostream & os, const Card & card);
// Description: A function that sets the output of a Card
// Pre: An initialized card
// Post: cout's the Card's value and suit

/***********************CLASS DEFINITIONS***********************/
class Card{
    public:
        // Constructors
        Card(){};
        Card(char value, char suit);
        // Gettter Functions
        bool getDestroyed() const;
        char getSuit() const;
        int getValue() const;
        // Member Functions     
        int operator+(Card & card) const;
        bool operator>(const Card & card) const;
        bool operator<(const Card & card) const;
        bool operator==(const Card & card) const;
        bool operator!=(const Card & card) const;
        void operator~();
        // Friend Functions
        friend int getDestroyedIndex(Card array[MAXARRAY]);
        friend ostream & operator<<(ostream & os, const Card & card);
    private:
        char m_value;
        char m_suit;
        bool m_destroyed;
};
#endif