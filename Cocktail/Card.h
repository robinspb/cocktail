//
//  Card.h
//  Cocktail
//
//  Created by Robinson, Peter on 5/31/15.
//  Copyright (c) 2015 Robinson. All rights reserved.
//

#ifndef __Cocktail__Card__
#define __Cocktail__Card__

#include <stdio.h>
#include <string>


class Card {
public:
   typedef enum {clubs = 0 , diamonds = 1, hearts = 2, spades = 3 } Suit;
   static std::string suitNames[4]; 

private:
   
   int m_id;
   Suit m_suit;
   /* 1-13, 1 is ace, 11-13 is J,Q, K */
   int m_val;
   
   
public:
   Card(int ID);
   int id() { return m_id; }
   Suit suit() { return m_suit; }
   int val() { return m_val; }
   void print();
   
   
};

#endif /* defined(__Cocktail__Card__) */
