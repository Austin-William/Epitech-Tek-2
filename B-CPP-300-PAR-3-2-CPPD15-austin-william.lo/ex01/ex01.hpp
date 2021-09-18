/*
** EPITECH PROJECT, 2021
** ex01.hpp
** File description:
** ex01.hpp
*/

#include <string>
#include <iostream>
#include <cstring>

#ifndef EX01_HPP_
#define EX01_HPP_

template <typename T>
int compare(T const &a, T const &b)
{
    if (a == b)
        return (0);
    else if (a < b)
        return (-1);
    return (1);
}

template<>
int compare(const char * const &a, const char * const &b)
{
    int cmp = std::strcmp(a, b);

    if (cmp == 0)
        return (0);
    else if (cmp < 0)
        return (-1);
    return (1);
}

#endif