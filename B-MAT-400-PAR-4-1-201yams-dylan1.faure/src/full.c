/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include "yams.h"

int check_calcul_a(yams_t *yams)
{
    int count = 0;

    if (yams->nb1 == yams->arg1)
        count++;
    if (yams->nb2 == yams->arg1)
        count++;
    if (yams->nb3 == yams->arg1)
        count++;
    if (yams->nb4 == yams->arg1)
        count++;
    if (yams->nb5 == yams->arg1)
        count++;
    return (count);
}

int check_calcul_b(yams_t *yams)
{
    int count = 0;

    if (yams->nb1 == yams->arg2)
        count++;
    if (yams->nb2 == yams->arg2)
        count++;
    if (yams->nb3 == yams->arg2)
        count++;
    if (yams->nb4 == yams->arg2)
        count++;
    if (yams->nb5 == yams->arg2)
        count++;
    return (count);
}

void print_full(yams_t *yams)
{
    int a = check_calcul_a(yams);
    int b = 0;
    float result = 0;
    int pair_result = 0;
    int three_result = 0;

    if (!yams->arg2)
        return;
    b = check_calcul_b(yams);
    if (a > 3)
        a = 3;
    if (b > 2)
        b = 2;
    pair_result = factorial(5 - b - a) / (factorial(3 - a) * factorial((5 - a - b) - (3 - b)));
    three_result = factorial(2 - b) / (factorial(2 - b) * factorial((2 - b) - (2 - b)));
    result = (pair_result * three_result) / pow(6, 5 - a - b);
    printf("Chances to get a %d full of %d: %0.2f%%\n", yams->arg1, yams->arg2, result * 100);
}