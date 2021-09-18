/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include "yams.h"

int check_pair(yams_t *yams)
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

void print_pair(yams_t *yams)
{
    float result = 0;

    if (check_pair(yams) >= 2) {
        printf("Chances to get a %d pair: 100.00%%\n", yams->arg1);
    } else if (check_pair(yams) == 1) {
        result = 4.00 / 6.00;
        printf("Chances to get a %d pair: %.02f%%\n", yams->arg1, result * 100);
    } else
        printf("Chances to get a %d pair: 19.62%%\n", yams->arg1);
}

