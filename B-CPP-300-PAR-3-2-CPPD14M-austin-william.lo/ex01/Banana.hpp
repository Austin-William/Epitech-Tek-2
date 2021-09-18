/*
** EPITECH PROJECT, 2021
** banana.hpp
** File description:
** banana.hpp
*/

#include <iostream>
#include <string>
#include "Fruit.hpp"

#ifndef BANANA_HPP_
#define BANANA_HPP_

class Banana : public Fruit
{
public:
    Banana();
    Banana(const Banana &b);
    ~Banana();
    const std::string getName() const;
    const int getVitamins() const;
    Banana &operator<<(const Banana &b);
};

#endif