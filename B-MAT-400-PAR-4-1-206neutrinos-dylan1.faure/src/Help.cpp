/*
** EPITECH PROJECT, 2021
** help.c
** File description:
** help.c
*/

#include "Neutrinos.hpp"

const void Neutrinos::print_help(void) const
{
    std::cout << "USAGE" << std::endl;
    std::cout << "    ./206neutrinos n a h sd\n" << std::endl;
    std::cout << "DESCRIPTION" << std::endl;
    std::cout << "    n      number of values" << std::endl;
    std::cout << "    a      arithmetic mean" << std::endl;
    std::cout << "    h      harmonic mean" << std::endl;
    std::cout << "    sd     standard deviation" << std::endl;
}
