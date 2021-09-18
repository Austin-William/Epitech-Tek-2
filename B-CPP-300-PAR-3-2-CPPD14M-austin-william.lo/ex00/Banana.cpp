/*
** EPITECH PROJECT, 2021
** banana.cpp
** File description:
** banana.cpp
*/

#include "Banana.hpp"

Banana::Banana() : Fruit(5, "banana")
{
}

Banana::Banana(const Banana &b) : Fruit(b.getVitamins(), b.getName())
{
    this->_name_fruit = b._name_fruit;
}

Banana::~Banana()
{
}

const std::string Banana::getName() const
{
    return (this->_name_fruit);
}

const int Banana::getVitamins() const
{
    return (this->_vitamins);
}

Banana &Banana::operator<<(const Banana &b)
{
    this->_name_fruit = b.getName();
    this->_vitamins = b.getVitamins();
    return (*this);
}