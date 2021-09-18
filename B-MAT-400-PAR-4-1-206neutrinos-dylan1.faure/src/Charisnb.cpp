/*
** EPITECH PROJECT, 2020
** charisnb.c
** File description:
** charisnb
*/

#include "Neutrinos.hpp"

const double Neutrinos::charisnb(char letter) const
{
    if (letter >= '0' && letter <= '9')
        return (0);
    return (-1);
}
