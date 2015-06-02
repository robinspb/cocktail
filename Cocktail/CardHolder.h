//
//  CardHolder.h
//  Cocktail
//
//  Created by Robinson, Peter on 6/1/15.
//  Copyright (c) 2015 Robinson. All rights reserved.
//

#ifndef __Cocktail__CardHolder__
#define __Cocktail__CardHolder__

#include <stdio.h>
#include "Card.h"
#include <vector>
#include <list>
class CardHolder {
public:
   typedef std::list<Card> CardCollection;
protected:
   CardCollection m_listOCards;
   CardCollection & cards() { return m_listOCards; }
public:
   void giveCard(Card && c);
   void giveCardTo(CardCollection::iterator cardItr, CardHolder & destHolder );
   CardCollection::iterator find(Card && c);
   
   
   
};
#endif /* defined(__Cocktail__CardHolder__) */
