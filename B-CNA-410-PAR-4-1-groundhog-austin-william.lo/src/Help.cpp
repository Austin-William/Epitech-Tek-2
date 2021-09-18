/*
** EPITECH PROJECT, 2021
** help.c
** File description:
** help.c
*/

#include "Groundhog.hpp"

const void Groundhog::print_help(void) const
{
    std::cout << "SYNOPSIS" << std::endl;
    std::cout << "    ./groundhog period\n" << std::endl;
    std::cout << "DESCRIPTION" << std::endl;
    std::cout << "    period      the number of days defining a period\n" << std::endl;
}
