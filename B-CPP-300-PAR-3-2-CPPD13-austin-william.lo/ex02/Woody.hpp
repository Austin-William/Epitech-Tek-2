/*
** EPITECH PROJECT, 2021
** woody.hpp
** File description:
** woody.hpp
*/

#include <iostream>
#include "Toy.hpp"

#ifndef WOODY_HPP_
#define WOODY_HPP_

class Woody : public Toy
{
public:
    Woody(const Woody &Woody);
    Woody(const std::string &name);
    Woody(const std::string &name, const std::string &file);
    ~Woody();
    Woody &operator=(const Woody &Woody);
};

#endif