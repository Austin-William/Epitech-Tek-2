/*
** EPITECH PROJECT, 2021
** sickkoala.hpp
** File description:
** sickkoala.hpp
*/

#include <iostream>
#include <string>
#include <iomanip>

#ifndef SICKKOALA_HPP_
#define SICKKOALA_HPP_

class SickKoala
{
    std::string name;

public:
    SickKoala(std::string name);
    ~SickKoala();
    void poke(void);
    bool takeDrug(std::string string);
    void overDrive(std::string string);
};

SickKoala::SickKoala(std::string name)
{
    this->name = name;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

#endif