/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "obj.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        if (my_objdump("./a.out") == 84) {
            printf("objdump: < a.out >: No such file\n");
            return (84);
        }
        return (0);
    } else  {
        if (my_objdump(av[1]) == 84) {
            printf("objdump: < %s >: Bad file\n", av[1]);
            return (84);
        }
    }
    return (0);
}