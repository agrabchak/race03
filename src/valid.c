#include "header.h"

void check_if_valid(char *card) {
    int rank = 0, suit = 0;
    if ((card[0] >= '2' && card[0] <= '9') ||
        card[0] == 'Q' || card[0] == 'K' ||
        card[0] == 'J' || card[0] == 'A'||
        (card[0] == '1' && card[1] == '0' && mx_strlen(card) == 3))
        rank = 1;
    int index = mx_strlen(card) - 1;
    if (card[index] == 'H' || card[index] == 'C' ||
        card[index] == 'S' || card[index] == 'D')
        suit = 1;
    if (!rank && suit) {
        char r[3];
    if (mx_strlen(card) == 2) {
        r[0] = card[0];
        r[1] = '\0';
        r[2] = '\0';
    } 
    else {
  	 r[0] = card[0];
  	 r[1] = card[1];
  	 r[2] = '\0';
    } 
    error("Invalid card rank: ", r);
    }
    if (!suit && rank) {
   	char s[2];
 	 s[0] = card[index];
  	s[1] = '\0';
 	 error("Invalid card suit: ", s);
    }
    if (!suit && !rank)
  	error("Invalid card: ", card);
    }

void check_duplicates(char **cards) {
     for (int i = 1; i < 5; i++) {
  	for (int j = i + 1; j < 6; j++) {
   	    if (!mx_strcmp(cards[i], cards[j]))
    		error("Duplicate cards: ", cards[i]);
  	    }
        }  
    }

void check_cards(char **cards) {
    for (int i = 1; i < 6; i++) {
 	 if (mx_strlen(cards[i]) == 2 ||
   	     mx_strlen(cards[i]) == 3) {
             check_if_valid(cards[i]);
         }
    else
  	 error("Invalid card: ", cards[i]);
    }
    check_duplicates(cards);
}

