/*
** EPITECH PROJECT, 2021
** littlepony.hpp
** File description:
** littlepony.hpp
*/

#include <iostream>
#include <iomanip>
#include "Toy.hpp"

#ifndef LITTLEPONY_HPP_
#define LITTLEPONY_HPP_

class LittlePony : public Toy
{
protected:
    /* data */
public:
    LittlePony(const std::string &Name);
    ~LittlePony();
    void isTaken();
};

#endif