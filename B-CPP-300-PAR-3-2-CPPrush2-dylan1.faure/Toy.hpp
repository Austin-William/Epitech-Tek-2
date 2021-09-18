/*
** EPITECH PROJECT, 2021
** toy.hpp
** File description:
** toy.hpp
*/

#include <iostream>
#include <iomanip>
#include "Object.hpp"

#ifndef TOY_HPP_
#define TOY_HPP_

class Toy : public Object
{
protected:
public:
    Toy(const std::string &Name, const std::string &TypeToy);
    ~Toy();
};

#endif