#include "deck.h"

/***********************FUNCTION DEFINITIONS***********************/
// Constructors
Deck::Deck(){
    for(int i = 0; i < SUITNUM; i++){
        for(int j = 0; j < VALUENUM; j++){
            m_deck[(i*VALUENUM)+j] = Card(VALUES[j], SUITS[i]);
        }
    }
}
Deck::Deck(Card array[], int arraySize){
    m_deckSize = arraySize;
    m_deck[m_deckSize] = array[arraySize];
}
// Member Functions
void Deck::shuffle(int arraySize){
    for (int i = (arraySize - 1); i > 0; i--){
        int newVal = rand() % (i + 1);
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