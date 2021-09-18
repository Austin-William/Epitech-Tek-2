/*
** EPITECH PROJECT, 2021
** buzz.cpp
** File description:
** buzz.cpp
*/

#include "Buzz.hpp"

Buzz::Buzz(const Buzz &toy_buzz) : Toy(BUZZ, toy_buzz._name, "")
{
    this->_picture = toy_buzz._picture;
}

Buzz::Buzz(const std::string &name) : Toy(BUZZ, name, "./buzz.txt")
{
}

Buzz::Buzz(const std::string &name, const std::string &filename) : Toy(BUZZ, name, filename)
{
}

Buzz::~Buzz()
{
}
