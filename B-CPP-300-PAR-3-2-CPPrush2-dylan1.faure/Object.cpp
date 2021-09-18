/*
** EPITECH PROJECT, 2021
** object.cpp
** File description:
** object.hpp
*/

#include "Object.hpp"

Object::Object(const std::string &Name, const std::string &typeToy)
{
    this->_name = Name;
    this->_type_toy = typeToy;
}

Object::~Object()
{
}

const std::string  Object::getName() const
{
    return (this->_name);
}

const std::string Object::getTypeToy() const
{
    return (this->_type_toy);
}

std::ostream &operator<<(std::ostream &stream, Object object)
{
    return (stream << object.getTypeToy() << std::endl);
}