//
//  CardHolder.cpp
//  Cocktail
//
//  Created by Robinson, Peter on 6/1/15.
//  Copyright (c) 2015 Robinson. All rights reserved.
//

#include "CardHolder.h"

void CardHolder::giveCard(Card && c) {
   cards().push_back(c);
}

void CardHolder::giveCardTo(CardCollection::iterator cardItr, CardHolder &destHolder) {
   destHolder.cards().push_back(*cardItr);
   cards().erase(cardItr);
}