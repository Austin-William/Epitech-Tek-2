/*
** EPITECH PROJECT, 2021
** fruit.hpp
** File description:
** fruit.hpp
*/

#ifndef FRUIT_HPP_
#define FRUIT_HPP_

#include <iostream>

class Fruit
{
protected:
    int _vitamins;
    std::string _name_fruit;

public:
    Fruit(int vitamins, std::string const &name);
    Fruit(Fruit const &);
    Fruit &operator=(Fruit const &);
    ~Fruit();
    const std::string getName() const;
    const int getVitamins() const;
};

#endif