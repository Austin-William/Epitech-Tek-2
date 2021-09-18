/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include "yams.h"

int check_four(yams_t *yams)
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

int check_calcul_four(yams_t *yams)
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

void print_four(yams_t *yams)
{
    float result = 0.00;

    if (check_four(yams) >= 4)
        printf("Chances to get a %d four-of-a-kind: 100.00%%\n", yams->arg1);
    else if (check_four(yams) == 1)
        printf("Chances to get a %d four-of-a-kind: 1.62%%\n", yams->arg1);
    else {
        result = calcul_proba(5 - check_calcul_four(yams), 3 - check_calcul_four(yams) + 1);
        printf("Chances to get a %d four-of-a-kind: %0.2f%%\n", yams->arg1, result * 100);
    }
}
