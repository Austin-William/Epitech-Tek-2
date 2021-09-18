/*
** EPITECH PROJECT, 2021
** wrap.hpp
** File description:
** wrap.hpp
*/

#include <iostream>
#include "Object.hpp"

#ifndef WRAP_HPP_
#define WRAP_HPP_

class Wrap : public Object
{
protected:
    Object *object;
    bool _is_open;
    bool _is_empty;
    std::string _type;

public:
    Wrap(const std::string &Title, const std::string &typeWrap);
    ~Wrap();
    virtual void wrapMeThat(Object *object);
    bool wrapIsEmpty() const;
    bool wrapIsOpen() const;
    Object *takeWrap();
    std::string getTypeWrap() const;
    void openWrap();
};

#endif