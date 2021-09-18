/*
** EPITECH PROJECT, 2021
** ConveyorBelt.hpp
** File description:
** ConveyorBelt.hpp
*/

#include <iostream>
#include <iomanip>
#include "Wrap.hpp"

#ifndef ICONVEYORBELT_HPP_
#define ICONVEYORBELT_HPP_

class IConveyorBelt : public Wrap
{
protected:
    int _stock;
    std::string _type_wrap;
    Wrap *_wrap;

public:
    IConveyorBelt(const std::string &Title, const std::string &typeWrap);
    virtual ~IConveyorBelt();
    virtual const std::string getTitle() const;
    virtual const std::string getTypeWrap() const;
};

class PapaXmasConveyorBelt : public IConveyorBelt
{
protected:
    std::string _title;

public:
    PapaXmasConveyorBelt(const std::string &Title, const std::string &typeWrap);
    ~PapaXmasConveyorBelt();
};

#endif