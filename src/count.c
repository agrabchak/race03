#include "header.h"

int count_suits(char **sorted_cards) {
    int suits[] = { 0,0,0,0 };
    for (int i = 0; i < 5; i++) {
        if (sorted_cards[i][mx_strlen(sorted_cards[i]) - 1] == 'H')
            suits[0]++;
        else if (sorted_cards[i][mx_strlen(sorted_cards[i]) - 1] == 'S')
            suits[1]++;
        else if (sorted_cards[i][mx_strlen(sorted_cards[i]) - 1] == 'C')
            suits[2]++;
        else
            suits[3]++;
    }
    int res = 0;
    for (int i = 0; i < 4; i++) {
        if (suits[i] > 0)
            res++;
    }
    return (res);
}

