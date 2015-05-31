//
//  main.cpp
//  testDeck
//
//  Created by Robinson, Peter on 5/31/15.
//  Copyright (c) 2015 Robinson. All rights reserved.
//

#include <iostream>
#include "Deck.h"
#include <assert.h>

int main(int argc, const char * argv[]) {
   // insert code here...
   Deck FourPlayerDeck = Deck(4);
   assert(FourPlayerDeck.numMissing() == 0);
   Deck EightPlayerDeck = Deck(8);
   assert(EightPlayerDeck.numMissing() == 0);
   Deck d9 = Deck(9);
   assert(d9.numMissing() == 5);
   d9.print();
   
   
   
    return 0;
}
