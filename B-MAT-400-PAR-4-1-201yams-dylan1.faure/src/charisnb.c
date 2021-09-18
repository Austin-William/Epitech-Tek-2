/*
** EPITECH PROJECT, 2020
** charisnb.c
** File description:
** charisnb
*/

int charisnb(char letter)
{
    if (letter >= '0' && letter <= '9')
        return (0);
    return (-1);
}
