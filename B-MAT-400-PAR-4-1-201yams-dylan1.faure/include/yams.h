/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#ifndef YAMS_H_
#define YAMS_H_

typedef struct yams_s
{
    int nb1;
    int nb2;
    int nb3;
    int nb4;
    int nb5;
    char *func;
    int arg1;
    int arg2;
} yams_t;

void print_help(void);
int start_yams(char **tab, char **av);
char **my_str_to_word_array(char **info_array, char const *str, char separator);
int charisnb(char letter);

float calcul_proba(float nb1, float nb2);
float binom_coeff(float nb1, float nb2);
float factorial(float nb);

void print_pair(yams_t *yams);
void print_full(yams_t *yams);
void print_yahtzee(yams_t *yams);
void print_three(yams_t *yams);
void print_four(yams_t *yams);
void print_straight(yams_t *yams);

#endif
