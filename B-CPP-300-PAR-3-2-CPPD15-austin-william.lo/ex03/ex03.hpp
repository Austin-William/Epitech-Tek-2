/*
** EPITECH PROJECT, 2021
** ex03.hpp
** File description:
** ex03.hpp
*/

#include <iostream>
#include <string>

template <typename T>
void foreach(T *adress, void (&ref)(T const &ref), int size)
{
    for (int a = 0; a < size; a++) {
        ref(adress[a]);
    }
}

template <typename T>
void print(T const &a)
{
    std::cout << a << std::endl;
}