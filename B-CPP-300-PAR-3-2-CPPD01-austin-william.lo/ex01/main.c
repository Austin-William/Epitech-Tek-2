/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
*/

#include "menger.h"

int check_power_3(char *av)
{
    int nb_square = atoi(av);

    for (int a = 1; a <= nb_square; a *= 3) {
        if (a == nb_square)
            return (0);
    }
    return (84);
}

int main (int ac, char **av)
{
    if (ac != 3 || check_power_3(av[1]) == 84)
        return (84);
    else if (menger(av) == 84)
        return (84);
    else
        return (0);
}