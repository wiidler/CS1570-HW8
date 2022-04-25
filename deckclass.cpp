#include "deckclass.h"

/***********************FUNCTION DEFINITIONS***********************/
// Constructors
Deck::Deck(){
    m_deckSize = MAXARRAY;
    for(int i = 0; i < SUITNUM; i++){
        for(int j = 0; j < VALUENUM; j++){
            m_deck[(i*VALUENUM)+j] = Card(VALUES[j], SUITS[i]);
        }
    }
}
Deck::Deck(Card array[], const int arraySize){
    m_deckSize = arraySize;
    for(int i = 0; i < arraySize; i++){
        m_deck[i] = array[i];
    }
}
// Getter Functions
Card Deck::getCard(int index) const{
    return m_deck[index];
}
int Deck::getDeckSize() const{
    return m_deckSize;
}
// Member Functions
void Deck::destroyCard(){
    m_deckSize--;
    return;
}
void Deck::addCard(){
    m_deckSize++;
    return;
}
void Deck::shuffle(int arraySize){
    for (int i = (arraySize - 1); i > 0; i--){
        int newVal = (rand() % (i + 1));
        Card temp;
        temp = m_deck[i];
        m_deck[i] = m_deck[newVal];
        m_deck[newVal] = temp;
    }
}