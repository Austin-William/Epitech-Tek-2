/*
** EPITECH PROJECT, 2021
** box.hpp
** File description:
** box.hpp
*/

#include <iostream>
#include "Wrap.hpp"

#ifndef BOX_HPP_
#define BOX_HPP_

class Box : public Wrap
{
protected:
    /* data */
public:
    Box(const std::string &Name);
    ~Box();
    void wrapMeThat(Object *object);
    void wrapClose();
};

#endif