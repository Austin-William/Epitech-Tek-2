/*
** EPITECH PROJECT, 2021
** box.cpp
** File description:
** box.cpp
*/

#include "Box.hpp"

Box::Box(const std::string &Name) : Wrap::Wrap(Name, "Box")
{
}

Box::~Box(void)
{
}

void Box::wrapMeThat(Object *object)
{
    if (this->_is_open == true) {
        Wrap::wrapMeThat(object);
        this->_is_open = false;
    }
}

void Box::wrapClose()
{
    this->_is_open = false;
}