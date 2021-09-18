/*
** EPITECH PROJECT, 2020
** charisnb.c
** File description:
** charisnb
*/

#include "Demography.hpp"

const double Demography::isChar(char letter) const
{
    if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z')
        return (0);
    return (-1);
}
