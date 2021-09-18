/*
** EPITECH PROJECT, 2021
** ConveyorBelt.cpp
** File description:
** ConveyorBelt.cpp
*/

#include "ConveyorBelt.hpp"

IConveyorBelt::IConveyorBelt(const std::string &Title, const std::string &typeWrap) : Wrap::Wrap(Title, typeWrap)
{
    this->_stock = 0;
    std::cout << "INITIALISATION DU CONVEYOR" << std::endl;
}

IConveyorBelt::~IConveyorBelt()
{
}

PapaXmasConveyorBelt::PapaXmasConveyorBelt(const std::string &Title, const std::string &typeWrap) : IConveyorBelt::IConveyorBelt(Title, typeWrap)
{
    this->_title = Title;
    this->_type_wrap = typeWrap;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{
}

std::string const PapaXmasConveyorBelt::IConveyorBelt::getTitle() const
{
    return (this->_title);
}

std::string const PapaXmasConveyorBelt::IConveyorBelt::getTypeWrap() const
{
    return (this->_type_wrap);
}