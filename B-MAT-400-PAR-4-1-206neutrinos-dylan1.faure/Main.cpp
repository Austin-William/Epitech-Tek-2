/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
*/

#include "Neutrinos.hpp"

int main(int ac, char **av)
{
    Neutrinos n;

    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        n.print_help();
        return (0);
    }
    if (ac != 5) {
        return (84);
    }
    if (av) {
        if (n.startNeutrinos(av) == 84)
            return (84);
    }

    return (0);
}
