//This is the implementation of the compare function for two set of cards.
//Only 1 "Compare" function even if sets of 5,6,7 cards need to be compared.

#ifndef Compare_h
#define Compare_h

#include"Card.h"
#include"check_combinations.h"

#include<vector>
using std::vector;

bool operator >( vector<Card> card1,  vector<Card> card2);
bool operator ==( vector<Card> card1,  vector<Card> card2);




//helper function for Compare
//This function helps me turn sets of cards into integers. Then I can compare the integers to determine who should
int transf_cards_to_int( vector<Card> cards);

bool check_sequence(vector<Card> cards);

vector<Card> get_sequence(vector<Card> cards);

//int find_min(const vector<Card>& cards);


bool same_suits(const vector<Card>& cards);

bool find(const vector<Card>& cards, int target);

void sort_in_order(vector<Card>& card);

vector<Card> get_four_of_kind(vector<Card> cards);

vector<Card> get_three(vector<Card>cards);

vector<Card> get_two(vector<Card> cards);

vector<Card> get_three_only(vector<Card> cards);

vector<Card> get_larger_pair(vector<Card> cards);

vector<Card> get_smaller_pair(vector<Card> cards);

vector<Card> get_only_pair(vector<Card> cards);
#endif /* Compare_h */
