/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include "yams.h"

int check_calcul_yahtzee(yams_t *yams)
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

void print_yahtzee(yams_t *yams)
{
    float result = 0;

    if (yams->nb1 == yams->arg1 && yams->nb2 == yams->arg1 && yams->nb3 == yams->arg1 && yams->nb4 == yams->arg1 && yams->nb5 == yams->arg1)
        printf("Chances to get a %d yams: 100.00%%\n", yams->arg1);
    else {
        result = calcul_proba(5, 5 - check_calcul_yahtzee(yams));
        printf("Chances to get a %d yams: %0.2f%%\n", yams->arg1, result * 100.00);
    }
}