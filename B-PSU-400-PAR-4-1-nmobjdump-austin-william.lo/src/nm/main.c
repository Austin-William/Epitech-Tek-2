/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "nm.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (my_nm(av) == 84)
        return (84);
    return (0);
}