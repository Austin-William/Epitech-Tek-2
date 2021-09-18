/*
** EPITECH PROJECT, 2021
** skat.cpp
** File description:
** skat.cpp
*/

#include "Skat.hpp"

Skat::Skat(const std::string name, int stimPaks)
{
    this->_name = name;
    this->_stimPaks = stimPaks;
}

Skat::~Skat()
{
}

void Skat::shareStimPaks(int number, int stock)
{
    if (number > this->_stimPaks)
        std::cout << "Don't be greedy" << std::endl;
    else {
        stock += number;
        this->_stimPaks -= number;
        std::cout << "Keep the change." << std::endl;
    }
}

const std::string &Skat::name()
{
    return (this->_name);
}

int Skat::stimPaks()
{
    return (this->_stimPaks);
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
    else
        this->_stimPaks += number;
}

void Skat::useStimPaks()
{
    if (this->_stimPaks == 0)
        std::cout << "Mediiiiiic" << std::endl;
    else {
        this->_stimPaks--;
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    }
}

void Skat::status()
{
    std::cout << "Soldier " << this->_name << " reporting "
        << this->_stimPaks << " stimpaks remaining sir!" << std::endl;
}