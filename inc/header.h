#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char *mx_strnew(const int size);
int count_suits(char **sorted_cards);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void check_duplicates(char **cards);
char *mx_strdup(const char *str);
char *mx_strchr(const char *s, int c);
int check_if_royal_flush(char **cards);
int check_if_straight(char **cards);
int check_if_four_of_a_kind(char **cards);
int check_if_full_house(char **cards);
int check_if_three_of_a_kind(char **cards);
int check_if_pair(char **cards);
int check_if_two_pair(char **cards);
void check_cards(char **cards);
char **sort_cards(char **argv, int *nb_suits);
void error(const char *str, char *arg);
const char *get_combination(char **cards, int nb_suits);

#endif

