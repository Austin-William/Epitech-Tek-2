/*
** EPITECH PROJECT, 2021
** menger.c
** File description:
** menger.c
*/

#include "menger.h"

void recursive_menger(int nb_square, int nb_level, int size_x,
    int size_y)
{
    nb_square /= 3;
    printf("%03d %03d %03d\n", nb_square, size_x + nb_square,
        size_y + nb_square);
    if (((nb_square / 3) > 0) && (nb_level > 1))
    {
        nb_level -= 1;
        recursive_menger(nb_square, nb_level, size_x, size_y);
        recursive_menger(nb_square, nb_level, size_x, size_y + nb_square);
        recursive_menger(nb_square, nb_level, size_x, size_y + 2 * nb_square);
        recursive_menger(nb_square, nb_level, size_x + nb_square, size_y);
        recursive_menger(nb_square, nb_level, size_x + nb_square,
            size_y + 2 * nb_square);
        recursive_menger(nb_square, nb_level, size_x + 2 * nb_square, size_y);
        recursive_menger(nb_square, nb_level, size_x + 2 * nb_square,
            size_y + nb_square);
        recursive_menger(nb_square, nb_level, size_x + 2 * nb_square,
            size_y + 2 * nb_square);
    }
}

int menger(char **av)
{
    int nb_square = atoi(av[1]);
    int nb_level = atoi(av[2]);
    int size_x = 0;
    int size_y = 0;

    if (nb_square < 0 || nb_level < 0)
        return (84);
    recursive_menger(nb_square, nb_level, size_x, size_y);
    return (0);
}