/*
** EPITECH PROJECT, 2021
** ex02.hpp
** File description:
** ex02.hpp
*/

#ifndef EX02_HPP_
#define EX02_HPP_

#include <string>
#include <iostream>

template <typename T>
T min(const T &a, const T &b)
{
    std::cout << "template min" << std::endl;
    if (a == b)
        return (a);
    return (a < b ? a : b);
}

int min(const int &a, const int &b)
{
    std::cout << "non-template min" << std::endl;
    if (a == b)
        return (a);
    return a < b ? a : b;
}

template <typename T>
T templateMin(const T *a, const int &size)
{
    T tmp_min = a[0];

    for (int b = 1; b < size; b++) {
        tmp_min = min<T>(a[b], tmp_min);
    }
    return (tmp_min);
}

int nonTemplateMin(const int *a, const int &size)
{
    int tmp_min = a[0];

    for (int b = 1; b < size; b++) {
        tmp_min = min(a[b], tmp_min);
    }
    return (tmp_min);
}

#endif