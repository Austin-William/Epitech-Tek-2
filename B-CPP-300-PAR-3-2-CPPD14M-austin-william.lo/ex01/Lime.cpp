/*
** EPITECH PROJECT, 2021
** lime.cpp
** File description:
** lime.cpp
*/

#include "Lime.hpp"

Lime::Lime()
{
    this->_name_fruit = "lemon";
    this->_vitamins = 2;
}

Lime::Lime(const Lime &l) : Lemon()
{
    this->_name_fruit = l.getName();
    this->_vitamins = l.getVitamins();
}

Lime::~Lime()
{
}

const std::string Lime::getName() const
{
    return (this->_name_fruit);
}

const int Lime::getVitamins() const
{
    return (this->_vitamins);
}

Lime &Lime::operator=(const Lime &l)
{
    this->_name_fruit = l.getName();
    this->_vitamins = l.getVitamins();
    return (*this);
}