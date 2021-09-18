/*
** EPITECH PROJECT, 2021
** teddy.hpp
** File description:
** teddy.hpp
*/

#include <iostream>
#include <iomanip>
#include "Toy.hpp"

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

class Teddy : public Toy
{
protected:
    std::string _name;
public:
    Teddy(const std::string &Name);
    ~Teddy();
    std::string getName();
    void isTaken();
};

#endif