#include "header.h"

int check_if_royal_flush(char **cards) {
    char card_order[] = "1JQKA";
    for (int i = 0; i < 5; i++)
    if (cards[i][0] != card_order[i])
   	return (0);
    return (1);
}

int check_if_straight(char **cards) {
    char card_order[] = "234567891JQKA";
    int i;
    for (i = 0; i < 9; i++)
  	if (cards[0][0] == card_order[i])
   	    break;
    for (int j = 1; j < 5; j++)
        if (cards[j][0] != card_order[i + j])
   	    return (0);
    return (1);
}

int check_if_four_of_a_kind(char **cards) {
    int count;
    for (int i = 0; i < 2; i++) {
  	count = 1;
    for (int j = i + 1; j < 5; j++) {
        if (cards[i][0] == cards[j][0])
    	    count += 1;
    }
    if (count == 4)
   	return (1);
    }
    return (0);
}

int check_if_full_house(char **cards) {
    char rank = 0;
    int count1;
    for (int i = 0; i < 5; i++) {
  	count1 = 1;
        for (int j = i + 1; j < 5; j++)
            if (cards[i][0] == cards[j][i])
                count1++;
        if (count1 == 3) {
            rank = cards[i][0];
            break;
        }
    }  
    if (count1 != 3)
 	 return (0);
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (cards[i][0] != rank && cards[i][0] == cards[j][0])
                 return (1);
        } 
    }
    return(0);
} 

