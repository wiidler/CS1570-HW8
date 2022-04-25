#include "deckclass.h"

/***********************FUNCTION DEFINITIONS***********************/
// Constructors
Deck::Deck(){
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
// Getter Functions
Card Deck::getCard(int index){
    return m_deck[index];
}
Card Deck::getDeck(){
    return m_deck[MAXARRAY];
}
int Deck::getDeckSize(){
    return m_deckSize;
}