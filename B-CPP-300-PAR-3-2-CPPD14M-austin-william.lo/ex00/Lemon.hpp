/*
** EPITECH PROJECT, 2021
** lemon.hpp
** File description:
** lemon.hpp
*/

#include <iostream>
#include <string>
#include "Fruit.hpp"

#ifndef LEMON_HPP_
#define LEMON_HPP_

class Lemon : public Fruit
{
public:
    Lemon();
    Lemon(const Lemon &l);
    ~Lemon();
    const std::string getName() const;
    const int getVitamins() const;
    Lemon &operator<<(const Lemon &l);
};

#endif