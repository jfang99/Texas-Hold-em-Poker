//This is the implementation of the compare function for two set of cards.
//Only 1 "Compare" function even if sets of 5,6,7 cards need to be compared.

#ifndef Compare_h
#define Compare_h

#include"Card.h"
#include"Card.cpp"

#include<vector>
using std::vector;

bool Compare(const vector<Card>& card1, const vector<Card>& card2);




//helper function for Compare
//This function helps me turn sets of cards into integers. Then I can compare the integers to determine who should
int transf_cards_to_int(const vector<Card>& card);




#endif /* Compare_h */
