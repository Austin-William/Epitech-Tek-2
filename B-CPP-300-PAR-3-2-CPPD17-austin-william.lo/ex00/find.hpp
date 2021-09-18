/*
** EPITECH PROJECT, 2021
** find.hpp
** File description:
** find.hpp
*/

#ifndef FIND_HPP_
#define FIND_HPP_

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

template <class T>
class T::iterator do_find(T &type, int size)
{
    return (std::find(type.begin(), type.end(), size));
}

#endif