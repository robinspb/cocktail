//
//  Deck.cxx
//  Cocktail
//
//  Created by Robinson, Peter on 5/31/15.
//  Copyright (c) 2015 Robinson. All rights reserved.
//

#include <stdio.h>
#include <assert.h>
#include <algorithm>

#include "Deck.h"
#include "Card.h"

Deck::Deck(unsigned int numPlayers) {
   assert(numPlayers < 16);
   /* one deck of 52 for every 8 players */
   int numNormalDecks = ((numPlayers / 8) + 1 );
   int fullDeckLength = numNormalDecks * 52;
   /* take out cards to be evenly divisible by number of players */
   m_len = (fullDeckLength / numPlayers) * numPlayers;
   int numToTakeOut = fullDeckLength - m_len;
   
   /* 2 of clubs, 2 of hearts, 3 of clubs, 3 of hearts */
   int dropOrder[4] =  { 1, 27, 2, 28 };
   std::vector<int> cardsToDrop;
   for  (int i = 0; i < numToTakeOut; ++i ) {
      cardsToDrop.push_back(dropOrder[i / numNormalDecks]);
   }
   //int suitOrder[4] = {0, 2, 1, 3};
   int cardOrder[52];
   for (int i = 0; i < 52; ++i) {
      cardOrder[i] = i;
   }
   /* hack to respect the takeout order */
   cardOrder[2] = 27;
   cardOrder[27] = 2;

   int takenIndex = 0;
   for (int i = 0; i < 52; ++i) {
      int id = cardOrder[i];
      for ( int j = 0; j < numNormalDecks; ++ j ) {
         if (numToTakeOut > 0 && id == cardsToDrop[takenIndex]) {
            takenIndex++;
         }
         else {
            cards().push_back(Card(id));
         }
      }
   }
   assert(m_len == cards().size());
   m_numMissingCards = numToTakeOut; 
}

Deck::~Deck() {}

Deck & Deck::shuffle() { return *this ; }

void Deck::print() {
   for ( auto && card: cards())  {
      card.print();
   }
}