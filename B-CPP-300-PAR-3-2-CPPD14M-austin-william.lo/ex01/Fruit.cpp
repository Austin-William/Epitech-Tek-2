/*
** EPITECH PROJECT, 2021
** fruit.cpp
** File description:
** fruit.cpp
*/

#include "Lemon.hpp"
#include "FruitBox.hpp"

Fruit::Fruit(int vitamins, const std::string &name)
{
    this->_name_fruit = name;
    this->_vitamins = vitamins;
}

Fruit::Fruit(const Fruit &f)
{
    this->_name_fruit = f._name_fruit;
    this->_vitamins = f._vitamins;
}

const std::string Fruit::getName() const
{
    return (this->_name_fruit);
}

const int Fruit::getVitamins() const
{
    return (this->_vitamins);
}

Fruit&	Fruit::operator=(const Fruit &f) {
  this->_name_fruit = f._name_fruit;
  this->_vitamins = f._vitamins;
  return *this;
}

Fruit::~Fruit()
{}