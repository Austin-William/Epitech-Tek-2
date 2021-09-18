/*
** EPITECH PROJECT, 2021
** sorcerer.cpp
** File description:
** sorcerer.cpp
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string Sorcerer::getName() const
{
    return (this->_name);
}

const std::string Sorcerer::getTitle() const
{
    return (this->_title);
}

std::ostream &operator<<(std::ostream &stream, Sorcerer &sorcerer)
{
    return (stream << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl);
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    return 0;
}