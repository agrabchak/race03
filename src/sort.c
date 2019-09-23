#include "header.h"

char **sort_cards(char **argv, int *nb_suits) {
    const char *card_order = "234567891JQKA";
    int added[] = { 0, 0, 0, 0, 0 };
    char **sorted_cards;
    sorted_cards = (char **)(malloc(sizeof(char *) * 6));
    sorted_cards[5] = NULL;
    int min_index, min_value, prev_index = -1, prev_value = -1;
    for (int i = 1; i < 6; i++) {
         min_index = 10;
         min_value = 20;
         for (int j = 1; j < 6; j++) {
   	     if (mx_strchr(card_order, argv[j][0]) - card_order < min_value &&
             mx_strchr(card_order, argv[j][0]) - card_order >= prev_value &&
             added[j - 1] == 0) {
  		  min_value = mx_strchr(card_order, argv[j][0]) - card_order;
    		  min_index = j;
             }
        }
 	 sorted_cards[i - 1] = mx_strdup(argv[min_index]);
	 prev_index = min_index;
  	 added[min_index - 1] = 1;
  	 prev_value = min_value;
    }
    *nb_suits = count_suits(sorted_cards);
    return sorted_cards;
}

