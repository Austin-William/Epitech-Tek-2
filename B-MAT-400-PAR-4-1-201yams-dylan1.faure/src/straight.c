/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include "yams.h"

int check_straight(yams_t *yams)
{
    int tmp2 = yams->nb2;
    int tmp3 = yams->nb3;
    int tmp4 = yams->nb4;
    int tmp5 = yams->nb5;

    if ((yams->nb1 == tmp2 - 1) && (yams->nb2 == tmp3 - 1) && (yams->nb3 == tmp4 - 1) && (yams->nb4 == tmp5 - 1) && tmp5 == yams->arg1)
        return (1);
    return (0);
}

int check_calcul_straight(yams_t *yams)
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

void print_straight(yams_t *yams)
{
    float result = 0.00;

    if (check_straight(yams) == 1)
        printf("Chances to get a %d straight: 100%%\n", yams->arg1);
    else {
        result = calcul_proba(6, 4 - check_calcul_straight(yams));
        printf("Chances to get a %d straight: %0.2f%%\n", yams->arg1, result * 100);
    }
}