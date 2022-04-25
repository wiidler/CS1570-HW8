#ifndef CARDCLASS_H
#define CARDCLASS_H

#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function: Card(){};
// Description: 
// Pre: 
// Post: 

// Function: Card(char value, char suit);
// Description: 
// Pre: 
// Post: 

// Function: bool getDestroyed() const;
// Description: 
// Pre: 
// Post: 

// Function: char getSuit() const;
// Description: 
// Pre: 
// Post:

// Function: char getValue() const;
// Description: 
// Pre: 
// Post:

// Function: int operator+(Card & card) const;
// Description: 
// Pre: 
// Post: 

// Function: bool operator>(const Card & card) const;
// Description: 
// Pre: 
// Post: 

// Function: bool operator<(const Card & card) const;
// Description: 
// Pre: 
// Post: 

// Function: bool operator==(const Card & card) const;
// Description: 
// Pre: 
// Post: 

// Function: bool operator!=(const Card & card) const;
// Description: 
// Pre: 
// Post: 

// Function: void operator~();
// Description: 
// Pre: 
// Post: 

// Function: friend int getDestroyedIndex(Card array[MAXARRAY]);
// Description: 
// Pre: 
// Post: 

// Function: friend ostream & operator<<(ostream & os, const Card & card);
// Description: 
// Pre: 
// Post: 

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