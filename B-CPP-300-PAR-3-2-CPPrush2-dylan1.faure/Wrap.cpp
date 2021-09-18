/*
** EPITECH PROJECT, 2021
** wrap.cpp
** File description:
** wrap.cpp
*/

#include "Wrap.hpp"

Wrap::Wrap(const std::string &Title, const std::string &typeWrap) : Object::Object(Title, typeWrap)
{
    this->_is_open = false;
    this->_is_empty = false;
}

Wrap::~Wrap()
{
}

void Wrap::wrapMeThat(Object *object)
{
    std::cout << "tuuuut tuuut tuut" << std::endl;
    this->object = object;
}

bool Wrap::wrapIsEmpty() const
{
    if (this->object)
        return (this->_is_empty == false);
    else {
        return (this->_is_empty == true);
    }
}

bool Wrap::wrapIsOpen() const
{
    return (this->_is_open);
}

std::string Wrap::getTypeWrap() const
{
    return (this->_type);
}

void Wrap::openWrap()
{
    this->_is_open == true;
}

Object *Wrap::takeWrap()
{
    Object *o;

    if (this->_is_empty == false) {
        o = this->object;
        this->object = NULL;
        openWrap();
        std::cout << "whistles while working" << std::endl;
        return (o);
    } else
        return (NULL);
}