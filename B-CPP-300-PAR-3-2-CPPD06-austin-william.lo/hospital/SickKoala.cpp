/*
** EPITECH PROJECT, 2021
** sickkoala.cpp
** File description:
** sickkoala.cpp
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
{
    this->name = name;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

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
        while (string.find("Kreog!", buff) != std::string::npos)
            buff++;
        string.replace(buff - 1, 6, "1337!");
        buff = 0;
    }
    std::cout << "Mr." << this->name << ": " << string << std::endl;
}