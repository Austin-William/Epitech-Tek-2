/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include "yams.h"

int check_three(yams_t *yams)
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
    if (count >= 3)
        return (1);
    return (0);
}

int check_calcul_three(yams_t *yams)
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

void print_three(yams_t *yams)
{
    float result = 0.00;

    if (check_three(yams) == 1)
        printf("Chances to get a %d three-of-a-kind: 100.00%%\n", yams->arg1);
    else {
        result = calcul_proba(3, check_calcul_three(yams) - 5);
        printf("Chances to get a %d three-of-a-kind: %0.2f%%\n", yams->arg1, result * 100);
    }
}