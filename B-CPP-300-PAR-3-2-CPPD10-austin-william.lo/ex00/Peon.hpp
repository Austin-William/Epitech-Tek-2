/*
** EPITECH PROJECT, 2021
** peon.hpp
** File description:
** peon.hpp
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Victim.hpp"

#ifndef PEON_HPP_
#define PEON_HPP_

class Peon : public Victim
{
protected:
    std::string _name;

public:
    Peon(std::string name);
    ~Peon();
    void getPolymorphed() const;
};

#endif