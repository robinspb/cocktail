//
//  Deck.h
//  Cocktail
//
//  Created by Robinson, Peter on 5/31/15.
//  Copyright (c) 2015 Robinson. All rights reserved.
//

#ifndef Cocktail_Deck_h
#define Cocktail_Deck_h



#include "Card.h"
#include "CardHolder.h"
#include <vector>



class Deck : public CardHolder {
  
private:
   int m_len;
   int m_numMissingCards;
public:
   /* Construct a deck appropriate for numPlayers */
   Deck(unsigned int numPlayers);
   
   ~Deck();
   
/* shuffle the deck, return a pointer to this deck for operation chaining */
   Deck & shuffle();
   void print();
   
   int numMissing() { return m_numMissingCards; }
   
   
};



#endif
