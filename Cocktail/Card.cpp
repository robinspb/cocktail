//
//  Card.cpp
//  Cocktail
//
//  Created by Robinson, Peter on 5/31/15.
//  Copyright (c) 2015 Robinson. All rights reserved.
//

#include "Card.h"
#include <assert.h>
#include <stdio.h>

std::string Card::suitNames[4] = { std::string("clubs"),
   std::string("diamonds"),
   std::string("hearts"),
   std::string("spades") };

Card::Card(int ID) : m_id(ID){
   assert(ID < 52);
   assert(ID >= 0);
   
   int suitID  = ID / 13;
   switch (suitID) {
      case 0:
         m_suit = clubs;
         break;
         
      case 1:
         m_suit = diamonds;
         break;
         
      case 2:
         m_suit = hearts;
         break;

      case 3:
         m_suit = spades;
         break;
      default:
         break;
   }
   
   m_val = (ID % 13) + 1;
   
   
}


void Card::print() {
   printf("ID: %i" , id());
   printf(" Suite: %s", Card::suitNames[suit()].c_str());
   printf(" Val: %i\n" ,val());
}
