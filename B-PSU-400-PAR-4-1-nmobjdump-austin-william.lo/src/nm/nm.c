/*
** EPITECH PROJECT, 2021
** nm
** File description:
** nm
*/

#include "nm.h"

int my_nm(char **av)
{
    if (open_file(av) == 84) {
        printf("nm: < %s >: File not supported\n", av[1]);
        return (84);
    }
    return (0);
}