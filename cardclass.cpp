#include "cardclass.h"

/***********************FUNCTION DEFINITIONS***********************/
// Constructors
Card::Card(char value, char suit){
    m_value = value;
    m_suit = suit;
    m_destroyed = false;
}
// Getter and Setter Functions
bool Card::getDestroyed() const{
    return m_destroyed;
}
char Card::getSuit() const{
    return m_suit;
}
int Card::getValue() const{
    return m_value;
}
// Member Functions
int Card::operator+(const Card & card) const{
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
        return 11;
    }
    else{
        return sum;
    }
    if(firstCardValue == secondCardValue){
        return 11;
    }
}
bool Card::operator>(const Card & card) const{
    int firstCardValue = 0;
    int secondCardValue = 0;
    switch(m_value){
        case ACE:
            firstCardValue = 1;
            break;
        case TWO:
            firstCardValue = 2;
            break;
        case THREE:
            firstCardValue = 3;
            break;
        case FOUR:
            firstCardValue = 4;
            break;
        case FIVE:
            firstCardValue = 5;
            break;
        case SIX:
            firstCardValue = 6;
            break;
        case SEVEN:
            firstCardValue = 7;
            break;
        case EIGHT:
            firstCardValue = 8;
            break;
        case NINE:
            firstCardValue = 9;
            break;
        case TEN:
            firstCardValue = 10;
            break;
        case JACK:
            firstCardValue = 11;
            break;
        case QUEEN:
            firstCardValue = 12;
            break;
        case KING:
            firstCardValue = 13;
            break;
    }
    switch(card.m_value){
        case ACE:
            secondCardValue = 1;
            break;
        case TWO:
            secondCardValue = 2;
            break;
        case THREE:
            secondCardValue = 3;
            break;
        case FOUR:
            secondCardValue = 4;
            break;
        case FIVE:
            secondCardValue = 5;
            break;
        case SIX:
            secondCardValue = 6;
            break;
        case SEVEN:
            secondCardValue = 7;
            break;
        case EIGHT:
            secondCardValue = 8;
            break;
        case NINE:
            secondCardValue = 9;
            break;
        case TEN:
            secondCardValue = 10;
            break;
        case JACK:
            secondCardValue = 11;
            break;
        case QUEEN:
            secondCardValue = 12;
            break;
        case KING:
            secondCardValue = 13;
            break;
    } 
    if(firstCardValue > secondCardValue){
        return true;
    }
    else{
        return false;
    }
}
bool Card::operator<(const Card & card) const{
    int firstCardValue = 0;
    int secondCardValue = 0;
    switch(m_value){
        case ACE:
            firstCardValue = 1;
            break;
        case TWO:
            firstCardValue = 2;
            break;
        case THREE:
            firstCardValue = 3;
            break;
        case FOUR:
            firstCardValue = 4;
            break;
        case FIVE:
            firstCardValue = 5;
            break;
        case SIX:
            firstCardValue = 6;
            break;
        case SEVEN:
            firstCardValue = 7;
            break;
        case EIGHT:
            firstCardValue = 8;
            break;
        case NINE:
            firstCardValue = 9;
            break;
        case TEN:
            firstCardValue = 10;
            break;
        case JACK:
            firstCardValue = 11;
            break;
        case QUEEN:
            firstCardValue = 12;
            break;
        case KING:
            firstCardValue = 13;
            break;
    }
    switch(card.m_value){
        case ACE:
            secondCardValue = 1;
            break;
        case TWO:
            secondCardValue = 2;
            break;
        case THREE:
            secondCardValue = 3;
            break;
        case FOUR:
            secondCardValue = 4;
            break;
        case FIVE:
            secondCardValue = 5;
            break;
        case SIX:
            secondCardValue = 6;
            break;
        case SEVEN:
            secondCardValue = 7;
            break;
        case EIGHT:
            secondCardValue = 8;
            break;
        case NINE:
            secondCardValue = 9;
            break;
        case TEN:
            secondCardValue = 10;
            break;
        case JACK:
            secondCardValue = 11;
            break;
        case QUEEN:
            secondCardValue = 12;
            break;
        case KING:
            secondCardValue = 13;
            break;
    }
    if(firstCardValue < secondCardValue){
        return true;
    }
    else{
        return false;
    }
}
bool Card::operator==(const Card & card) const{
    int firstCardValue = 0;
    int secondCardValue = 0;
    if(m_value == ACE || m_value == TEN || m_value == JACK || m_value == QUEEN || m_value == KING){
        switch(m_value){
            case ACE:
                firstCardValue = 1;
                break;
            case TEN:
                firstCardValue = 10;
                break;
            case JACK:
                firstCardValue = 11;
                break;
            case QUEEN:
                firstCardValue = 12;
                break;
            case KING:
                firstCardValue = 13;
                break;
        }
    }
    else{
        firstCardValue = m_value - '0';
    }
    if(card.m_value == ACE || card.m_value == TEN || card.m_value == JACK || card.m_value == QUEEN || card.m_value == KING){
        switch(card.m_value){
            case ACE:
                secondCardValue = 1;
                break;
            case TEN:
                secondCardValue = 10;
                break;
            case JACK:
                secondCardValue = 11;
                break;
            case QUEEN:
                secondCardValue = 12;
                break;
            case KING:
                secondCardValue = 13;
                break;
        }
    }
    if(firstCardValue == secondCardValue){
        return true;
    }
    else{
        return false;
    }
}
bool Card::operator!=(const Card & card) const{
    int firstCardValue = 0;
    int secondCardValue = 0;
    if(m_value == ACE || m_value == TEN || m_value == JACK || m_value == QUEEN || m_value == KING){
        switch(m_value){
            case ACE:
                firstCardValue = 1;
                break;
            case TEN:
                firstCardValue = 10;
                break;
            case JACK:
                firstCardValue = 11;
                break;
            case QUEEN:
                firstCardValue = 12;
                break;
            case KING:
                firstCardValue = 13;
                break;
        }
    }
    else{
        firstCardValue = m_value - '0';
    }
    if(card.m_value == ACE || card.m_value == TEN || card.m_value == JACK || card.m_value == QUEEN || card.m_value == KING){
        switch(m_value){
            case ACE:
                secondCardValue = 1;
                break;
            case TEN:
                secondCardValue = 10;
                break;
            case JACK:
                secondCardValue = 11;
                break;
            case QUEEN:
                secondCardValue = 12;
                break;
            case KING:
                secondCardValue = 13;
                break;
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
    return;
}
// Friend Functions
int getDestroyedIndex(Card array[]){
    for(int i=0; i < MAXARRAY; i++){
        if(array[i].m_destroyed){
            return i;
        }
    }
    return -1;
}
ostream & operator<<(ostream & os, const Card & card){
    if(card.m_value == TEN){
        cout << "10" << card.m_suit;
    } 
    else{
        os << card.m_value << card.m_suit;
    }
    return os;
}