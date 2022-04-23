#include "constants.h"
#include "card.h"
#include "deck.h"
#include <iostream>

using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
// Constructors
Card::Card(char value, char suit){
    m_value = value;
    m_suit = suit;
}
// Setter Functions
void Card::setDestroyed(){
    m_destroyed = true;
}
// Member Functions
int Card::operator+(Card & card){
    int sum = 0;
    int firstCardValue = 0;
    int secondCardValue = 0;
    if(m_value == ACE || m_value == TEN || m_value == JACK || m_value == QUEEN || m_value == KING){
        firstCardValue = 10;
    }
    else{
        firstCardValue = m_value - '0';
    }
    if(card.m_value == ACE || card.m_value == TEN || card.m_value == JACK || card.m_value == QUEEN || card.m_value == KING){
        secondCardValue = 10;
    }
    else{
        secondCardValue = card.m_value - '0';
    }
    sum = firstCardValue + secondCardValue;
    if(sum == 11){
        m_destroyed = true;
        card.setDestroyed();
        return 11;
    }
    else{
        return 17;
    }
}
// Non-Member Functions
bool Card::operator>(const Card & card){
    int firstCardValue = 0;
    int secondCardValue = 0;
    if(m_value == ACE || m_value == TEN || m_value == JACK || m_value == QUEEN || m_value == KING){
        switch(m_value){
            case ACE:
                firstCardValue = 1;
            case TEN:
                firstCardValue = 10;
            case JACK:
                firstCardValue = 11;
            case QUEEN:
                firstCardValue = 12;
            case KING:
                firstCardValue = 13;
        }
    }
    else{
        firstCardValue = m_value - '0';
    }
    if(card.m_value == ACE || card.m_value == TEN || card.m_value == JACK || card.m_value == QUEEN || card.m_value == KING){
        switch(m_value){
            case ACE:
                secondCardValue = 1;
            case TEN:
                secondCardValue = 10;
            case JACK:
                secondCardValue = 11;
            case QUEEN:
                secondCardValue = 12;
            case KING:
                secondCardValue = 13;
        }
    }
    else{
        secondCardValue = card.m_value - '0';
    }   
    if(m_suit != card.m_suit){
        if(firstCardValue > secondCardValue){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(firstCardValue < secondCardValue){
            return true;
        }
        else{
            return false;
        }
    }
}
bool Card::operator<(const Card & card){
    int firstCardValue = 0;
    int secondCardValue = 0;
    if(m_value == ACE || m_value == TEN || m_value == JACK || m_value == QUEEN || m_value == KING){
        switch(m_value){
            case ACE:
                firstCardValue = 1;
            case TEN:
                firstCardValue = 10;
            case JACK:
                firstCardValue = 11;
            case QUEEN:
                firstCardValue = 12;
            case KING:
                firstCardValue = 13;
        }
    }
    else{
        firstCardValue = m_value - '0';
    }
    if(card.m_value == ACE || card.m_value == TEN || card.m_value == JACK || card.m_value == QUEEN || card.m_value == KING){
        switch(m_value){
            case ACE:
                secondCardValue = 1;
            case TEN:
                secondCardValue = 10;
            case JACK:
                secondCardValue = 11;
            case QUEEN:
                secondCardValue = 12;
            case KING:
                secondCardValue = 13;
        }
    }
    else{
        secondCardValue = card.m_value - '0';
    }   
    if(m_suit != card.m_suit){
        if(firstCardValue < secondCardValue){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(firstCardValue > secondCardValue){
            return true;
        }
        else{
            return false;
        }
    }
}
bool Card::operator==(const Card & card){
    int firstCardValue = 0;
    int secondCardValue = 0;
    if(m_value == ACE || m_value == TEN || m_value == JACK || m_value == QUEEN || m_value == KING){
        switch(m_value){
            case ACE:
                firstCardValue = 1;
            case TEN:
                firstCardValue = 10;
            case JACK:
                firstCardValue = 11;
            case QUEEN:
                firstCardValue = 12;
            case KING:
                firstCardValue = 13;
        }
    }
    else{
        firstCardValue = m_value - '0';
    }
    if(card.m_value == ACE || card.m_value == TEN || card.m_value == JACK || card.m_value == QUEEN || card.m_value == KING){
        switch(m_value){
            case ACE:
                secondCardValue = 1;
            case TEN:
                secondCardValue = 10;
            case JACK:
                secondCardValue = 11;
            case QUEEN:
                secondCardValue = 12;
            case KING:
                secondCardValue = 13;
        }
    }
    if(firstCardValue == secondCardValue){
        return true;
    }
    else{
        return false;
    }
}
bool Card::operator!=(const Card & card){
    int firstCardValue = 0;
    int secondCardValue = 0;
    if(m_value == ACE || m_value == TEN || m_value == JACK || m_value == QUEEN || m_value == KING){
        switch(m_value){
            case ACE:
                firstCardValue = 1;
            case TEN:
                firstCardValue = 10;
            case JACK:
                firstCardValue = 11;
            case QUEEN:
                firstCardValue = 12;
            case KING:
                firstCardValue = 13;
        }
    }
    else{
        firstCardValue = m_value - '0';
    }
    if(card.m_value == ACE || card.m_value == TEN || card.m_value == JACK || card.m_value == QUEEN || card.m_value == KING){
        switch(m_value){
            case ACE:
                secondCardValue = 1;
            case TEN:
                secondCardValue = 10;
            case JACK:
                secondCardValue = 11;
            case QUEEN:
                secondCardValue = 12;
            case KING:
                secondCardValue = 13;
        }
    }
    if(firstCardValue == secondCardValue){
        return false;
    }
    else{
        return true;
    }
}
void Card::operator~(){
    m_destroyed = true;
}
// Friend Functions
ostream & operator<<(ostream & os, const Card & card){
    os << card.m_value << card.m_suit << " ";
    return os;
}