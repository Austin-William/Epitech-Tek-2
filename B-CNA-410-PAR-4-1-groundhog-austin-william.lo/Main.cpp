/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
*/

#include "Groundhog.hpp"

int main(int ac, char **av)
{
    Groundhog g;

    if (ac != 2) {
        return (84);
    }
    if (av) {
        if (strcmp(av[1], "-h") == 0) {
            g.print_help();
            return (0);
        }
        if (g.startGroundhog(av) == 84)
            return (84);
    }

    return (0);
}
