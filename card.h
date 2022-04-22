#ifndef CARD_H
#define CARD_H

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
        
    private:
        char m_value;
        char m_suit;
        bool m_destroyed;
};

#endif