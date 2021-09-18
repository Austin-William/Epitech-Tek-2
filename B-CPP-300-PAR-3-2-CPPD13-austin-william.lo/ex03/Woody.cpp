/*
** EPITECH PROJECT, 2021
** woody.cpp
** File description:
** woody.cpp
*/

#include "Woody.hpp"

Woody::Woody(const Woody &toy_Woody) : Toy(WOODY, toy_Woody._name, "")
{
    this->_picture = toy_Woody._picture;
}

Woody::Woody(const std::string &name) : Toy(WOODY, name, "./woody.txt")
{
}

Woody::Woody(const std::string &name, const std::string &filename) : Toy(WOODY, name, filename)
{
}

Woody::~Woody()
{
}