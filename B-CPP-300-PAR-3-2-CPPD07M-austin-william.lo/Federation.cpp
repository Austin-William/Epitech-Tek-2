/*
** EPITECH PROJECT, 2021
** federation.cpp
** File description:
** federation.cpp
*/

#include "Federation.hpp"

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;

    std::cout << "The independent ship " << this->_name << " just finished its construction." << std::endl;
    std::cout << "It is " << this->_length << " m in length and "
              << this->_width << " m in width." << std::endl;
}

Federation::Ship::Ship::~Ship()
{
}

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;

    std::cout << "The ship USS " << this->_name << " has been finished." << std::endl;
    std::cout << "It is " << this->_length << " m in length and "
              << this->_width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << this->_maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{
}

void Federation::Starfleet::Ship::setupICore(WarpSystem::ICore *ICoreReactor)
{
    this->_ICore = ICoreReactor;

    std::cout << "USS " << this->_name << ": The ICore is set." << std::endl;
}

void Federation::Starfleet::Ship::checkICore(void)
{
    if (this->_ICore->checkReactor()->isStable() == true)
        std::cout << "USS " << this->_name << ": The ICore is stable at the time." << std::endl;
    else if (this->_ICore->checkReactor()->isStable() == false)
        std::cout << "USS " << this->_name << ": The ICore is unstable at the time." << std::endl;
}

void Federation::Ship::setupICore(WarpSystem::ICore *ICoreReactor)
{
    this->_ICore = ICoreReactor;

    std::cout << this->_name << ": The ICore is set." << std::endl;
}

void Federation::Ship::checkICore(void)
{
    if (this->_ICore->checkReactor()->isStable() == true)
        std::cout << this->_name << ": The ICore is stable at the time." << std::endl;
    else if (this->_ICore->checkReactor()->isStable() == false)
        std::cout << this->_name << ": The ICore is unstable at the time." << std::endl;
}