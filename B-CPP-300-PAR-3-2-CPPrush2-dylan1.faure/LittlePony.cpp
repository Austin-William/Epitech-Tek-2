/*
** EPITECH PROJECT, 2021
** littlepony.cpp
** File description:
** littlepony.cpp
*/

#include "LittlePony.hpp"

LittlePony::LittlePony(const std::string &Name) : Toy::Toy(Name, "LittlePony")
{
    this->_title = "happy pony";
}

LittlePony::~LittlePony()
{
}

void LittlePony::isTaken()
{
    this->_is_taken = true;
    std::cout << "yo man" << std::endl;
}