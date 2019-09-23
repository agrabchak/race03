#include "header.h"

int main(int argc, char **argv) {
 if (argc == 6) {
  int nb_suits = 0;
  char **sorted_cards;
  check_cards(argv);
  sorted_cards = sort_cards(argv, &nb_suits);
  mx_printstr(get_combination(sorted_cards, nb_suits));
 }
 else
  error("usage: ./race03 [card1] [card2] [card3] [card4] [card5]\n", NULL);
 system("pause");
 return (0);
}
