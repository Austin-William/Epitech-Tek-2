/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include "yams.h"

int all_funct_calcul(yams_t *yams)
{
    if (strcmp(yams->func, "pair") == 0)
    {
        print_pair(yams);
        return (0);
    }
    else if (strcmp(yams->func, "four") == 0)
    {
        print_four(yams);
        return (0);
    }
    else if (strcmp(yams->func, "three") == 0)
    {
        print_three(yams);
        return (0);
    }
    else if (strcmp(yams->func, "yams") == 0)
    {
        print_yahtzee(yams);
        return (0);
    }
    else if (strcmp(yams->func, "straight") == 0)
    {
        print_straight(yams);
        return (0);
    }
    else
    {
        printf("Unknow command.\n");
        return (84);
    }
}

int start_yams(char **tab, char **av)
{
    yams_t *yams = malloc(sizeof(yams_t));

    if (!yams || !tab[1])
        return (84);
    if (charisnb(av[1][0]) == -1 ||
        charisnb(av[2][0]) == -1 ||
        charisnb(av[3][0]) == -1 ||
        charisnb(av[4][0]) == -1 ||
        charisnb(av[5][0]) == -1 ||
        charisnb(tab[1][0]) == -1)
        return (84);
    yams->nb1 = atof(av[1]);
    if (yams->nb1 < 0 || yams->nb1 > 6)
    {
        printf("Error: Parameter 1 is not a number or should be between 0 and 6.\n");
        return (84);
    }
    yams->nb2 = atof(av[2]);
    if (yams->nb2 < 0 || yams->nb2 > 6)
    {
        printf("Error: Parameter 2 is not a number or should be between 0 and 6.\n");
        return (84);
    }
    yams->nb3 = atof(av[3]);
    if (yams->nb3 < 0 || yams->nb3 > 6)
    {
        printf("Error: Parameter 3 is not a number or should be between 0 and 6.\n");
        return (84);
    }
    yams->nb4 = atof(av[4]);
    if (yams->nb4 < 0 || yams->nb4 > 6)
    {
        printf("Error: Parameter 4 is not a number or should be between 0 and 6.\n");
        return (84);
    }
    yams->nb5 = atof(av[5]);
    if (yams->nb5 < 0 || yams->nb5 > 6)
    {
        printf("Error: Parameter 5 is not a number or should be between 0 and 6.\n");
        return (84);
    }
    yams->func = tab[0];
    if (!yams->func)
    {
        printf("Error: Command not found.\n");
        return (84);
    }
    if (tab[1])
    {
        yams->arg1 = atof(tab[1]);
        if (yams->arg1 < 0 || yams->arg1 > 6)
        {
            printf("Error: Parameter 6 is not a number or should be between 0 and 6.\n");
            return (84);
        }
    }
    if (tab[2])
    {
        if (charisnb(tab[2][0]) == -1)
            return (84);
        yams->arg2 = atof(tab[2]);
        if (yams->arg1 == yams->arg2) {
            printf("Error: Parameter of full function need to be differents.\n");
            return (84);
        }
        if (yams->arg2 < 0 || yams->arg2 > 6)
        {
            printf("Error: Parameter 7 is not a number or should be between 0 and 6.\n");
            return (84);
        }
        if (strcmp(yams->func, "full") == 0)
        {
            print_full(yams);
            return (0);
        }
    }
    if (all_funct_calcul(yams) == 84)
        return (84);
    return (0);
}
