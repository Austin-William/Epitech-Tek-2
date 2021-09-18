/*
** EPITECH PROJECT, 2021
** teddy.cpp
** File description:
** teddy.cpp
*/

#include "Teddy.hpp"

Teddy::Teddy(const std::string &Name) : Toy::Toy(Name, "Teddy")
{
    this->_title = "cuddles";
    this->_name = Name;
}

Teddy::~Teddy()
{
}

std::string Teddy::getName()
{
    return (this->_name);
}

void Teddy::isTaken()
{
    this->_is_taken = true;
    std::cout << "gra hu" << std::endl;
}