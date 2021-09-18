/*
** EPITECH PROJECT, 2021
** lime.hpp
** File description:
** lime.hpp
*/

#ifndef LIME_HPP_
#define LIM_HPP_

#include <iostream>
#include "Lemon.hpp"

class Lime : public Lemon
{
public:
    Lime();
    Lime(const Lime &l);
    ~Lime();
    const std::string getName() const;
    const int getVitamins() const;
    Lime &operator=(const Lime &);
};

#endif