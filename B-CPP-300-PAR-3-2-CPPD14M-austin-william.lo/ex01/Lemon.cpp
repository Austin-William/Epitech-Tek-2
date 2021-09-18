/*
** EPITECH PROJECT, 2021
** lemon.cpp
** File description:
** lemon.cpp
*/

#include "Lemon.hpp"

Lemon::Lemon() : Fruit(3, "lemon")
{
}

Lemon::Lemon(const Lemon &l) : Fruit(l.getVitamins(), l.getName())
{
}

Lemon::~Lemon()
{
}

const std::string Lemon::getName() const
{
    return (this->_name_fruit);
}

const int Lemon::getVitamins() const
{
    return (this->_vitamins);
}

Lemon &Lemon::operator<<(const Lemon &b)
{
    this->_name_fruit = b.getName();
    this->_vitamins = b.getVitamins();
    return (*this);
}