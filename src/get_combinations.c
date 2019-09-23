#include "header.h"

const char *get_combination(char **cards, int nb_suits) {
 if (nb_suits == 1 && check_if_royal_flush(cards))
  return ("Royal flush");
 else if (nb_suits == 1 && check_if_straight(cards))
  return ("Straight flush");
 else if (nb_suits == 4 && check_if_four_of_a_kind(cards))
  return ("Four of a kind");
 else if (check_if_full_house(cards))
  return ("Full house");
 else if (nb_suits == 1)
  return ("Flush");
 else if (check_if_straight(cards))
  return ("Straight");
 else if (check_if_three_of_a_kind(cards))
  return ("Three of a kind");
 else if (check_if_two_pair(cards))
  return ("Two pair");
 else if (check_if_pair(cards))
  return ("Pair");
 else
  return ("No pair");
}
