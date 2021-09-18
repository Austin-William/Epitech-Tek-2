/*
** EPITECH PROJECT, 2021
** sickkoala.cpp
** File description:
** sickkoala.cpp
*/

#include "SickKoala.hpp"

void SickKoala::poke(void)
{
    std::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string string)
{
    if (string.compare("Mars") == 0) {
        std::cout << "Mr." << this->name << ": Mars, and it kreogs!" << std::endl;
        return (true);
    } else if (string.compare("Kinder") == 0) {
        std::cout << "Mr." << this->name << ": There is a toy inside!" << std::endl;
        return (true);
    } else {
        std::cout << "Mr." << this->name << ": Goerkreog!" << std::endl;
        return (false);
    }
}

void SickKoala::overDrive(std::string string)
{
    std::size_t buff = 0;

    while (string.find("Kreog!", buff) != std::string::npos) {
        string.replace(buff, 6, "1337!");
        std::cout << "Mr." << this->name << ": " << string << std::endl;
        buff++;
    }
}