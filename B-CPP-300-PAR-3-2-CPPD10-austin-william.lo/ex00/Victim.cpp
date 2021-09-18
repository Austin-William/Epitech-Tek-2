/*
** EPITECH PROJECT, 2021
** victim.cpp
** File description:
** victim.cpp
*/

#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

const std::string Victim::getName() const
{
    return (this->_name);
}

std::ostream &operator<<(std::ostream &stream, Victim &victim)
{
    return (stream << "I'm " << victim.getName() << " and I like otters!" << std::endl);
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}