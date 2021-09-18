/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "yams.h"

int main(int ac, char **av)
{
    char **tab = NULL;

    if (ac != 7 && ac != 2)
        return (84);
    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        print_help();
        return (0);
    } else if (ac == 2 && strcmp(av[1], "-h") != 0)
        return (84);
    tab = my_str_to_word_array(tab, av[6], '_');
    if (!tab)
        return (84);
    if (start_yams(tab, av) == 84)
        return (84);
    return (0);
}
