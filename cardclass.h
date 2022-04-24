#ifndef CARDCLASS_H
#define CARDCLASS_H

#include "constants.h"
#include <iostream>
using namespace std;

/***********************CLASS FUNCTION DOCUMENTATION***********************/

// Function: 
// Description: 
// Pre: 
// Post: 

/***********************CLASS DEFINITIONS***********************/
class Card{
    public:
        // Constructors
        Card(){};
        Card(char value, char suit);
        // Gettter and Setter Functions
        bool getDestroyed();
        void setDestroyed();
        // Member Functions
        int operator+(Card & card);
        // Non-Member Functions
        bool operator>(const Card & card);
        bool operator<(const Card & card);
        bool operator==(const Card & card);
        bool operator!=(const Card & card);
        void operator~();
        // Friend Functions
        friend ostream & operator<<(ostream & os, const Card & card);
    private:
        char m_value;
        char m_suit;
        bool m_destroyed;
};
#endif