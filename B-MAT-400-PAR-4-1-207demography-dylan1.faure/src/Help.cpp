/*
** EPITECH PROJECT, 2021
** help.c
** File description:
** help.c
*/

#include "Demography.hpp"

const void Demography::print_help(void) const
{
    std::cout << "USAGE" << std::endl;
    std::cout << "    ./207demography code [...]\n" << std::endl;
    std::cout << "DESCRIPTION" << std::endl;
    std::cout << "    code   country code" << std::endl;
}
