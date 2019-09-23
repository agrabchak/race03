#include "header.h"

int check_if_three_of_a_kind(char **cards) {
    int count;
    for (int i = 0; i < 5; i++) {
        count = 1;
            for (int j = i + 1; j < 5; j++) {
                if (cards[i][0] == cards[j][0])
    		    count++;
            }
            if (count == 3)
                 return (1);
    }
    return (0);
}

int check_if_pair(char **cards) {
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++)
            if (cards[i][0] == cards[j][0])
                return (1);
    }  
    return (0);
}

int check_if_two_pair(char **cards) {
    char rank = 0;
    int count1;
    for (int i = 0; i < 5; i++) {
        count1 = 1;
        for (int j = i + 1; j < 5; j++)
            if (cards[i][0] == cards[j][i])
    		count1++;
        if (count1 == 2) {
            rank = cards[i][0];
            break;
        }
    }
    if (count1 != 2)
        return (0);
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (cards[i][0] != rank && cards[i][0] == cards[j][0])
                return (1);
        }
    }
    return(0);
} 

