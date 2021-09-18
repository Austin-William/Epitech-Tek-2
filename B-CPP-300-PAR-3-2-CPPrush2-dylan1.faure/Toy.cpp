/*
** EPITECH PROJECT, 2021
** toy.cpp
** File description:
** toy.cpp
*/

#include "Toy.hpp"

Toy::Toy(const std::string &Name, const std::string &TypeToy) : Object::Object(Name, TypeToy)
{
    this->_is_taken = false;
}

Toy::~Toy()
{
}