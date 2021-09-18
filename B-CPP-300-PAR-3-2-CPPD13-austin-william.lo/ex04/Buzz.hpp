/*
** EPITECH PROJECT, 2021
** buzz.hpp
** File description:
** buzz.hpp
*/

#include <iostream>
#include "Toy.hpp"

#ifndef BUZZ_HPP_
#define BUZZ_HPP_

class Buzz : public Toy
{
public:
    Buzz(const Buzz &buzz);
    Buzz(const std::string &name);
    Buzz(const std::string &name, const std::string &file);
    ~Buzz();
    Buzz &operator=(const Buzz &buzz);
};

#endif