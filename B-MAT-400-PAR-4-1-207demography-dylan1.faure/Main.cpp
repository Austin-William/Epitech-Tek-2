/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
*/

#include "Demography.hpp"

int main(int ac, char **av)
{
    Demography d;

    if (ac < 2)
    {
        return (84);
    }
    if (strcmp(av[1], "-h") == 0 && ac == 2)
    {
        d.print_help();
        return (0);
    }
    if (d.startDemography(ac, av) == 84)
        return (84);
    return (0);
}
