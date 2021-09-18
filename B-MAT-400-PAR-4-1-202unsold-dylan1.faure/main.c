/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "unsold.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return (84);
    if (strcmp(av[1], "-h") == 0) {
        print_help();
        return (0);
    }
    if (ac != 3)
        return (84);
    if (unsold(av) == 84)
        return (84);
    return (0);
}
