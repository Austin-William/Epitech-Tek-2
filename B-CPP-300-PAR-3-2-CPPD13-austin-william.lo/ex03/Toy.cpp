/*
** EPITECH PROJECT, 2021
** toy.cpp
** File description:
** toy.cpp
*/

#include "Toy.hpp"

Toy::Toy()
{
    this->_type = BASIC_TOY;
    this->_name = "toy";
}

Toy::Toy(ToyType toyType, const std::string &name, const std::string &filename) : _type(toyType), _name(name), _picture(Picture(filename))
{
}

Toy::Toy(const Toy &toy)
{
    this->_type = toy.getType();
    this->_name = toy.getName();
    this->_picture = toy.getAscii();
}

Toy::~Toy()
{
}

const std::string Toy::getName() const
{
    return (this->_name);
}

const Toy::ToyType Toy::getType() const
{
    return (this->_type);
}

const std::string Toy::getAscii() const
{
    return (this->_picture.data);
}

void Toy::setName(const std::string &name)
{
    this->_name = name;
}

bool Toy::setAscii(const std::string &filename)
{
    return (this->_picture.getPictureFromFile(filename));
}

Toy &Toy::operator<<(const Toy &toy)
{
    this->_name = toy.getName();
    this->_type = toy.getType();
    this->_picture = toy.getAscii();
    return (*this);
}

void Toy::speak(const std::string &str)
{
    if (this->getType() == WOODY)
        std::cout << "WOODY: " << this->_name << " \"" << str << "\"" << std::endl;
    else if (this->getType() == BUZZ)
        std::cout << "BUZZ: " << this->_name << " \"" << str << "\"" << std::endl;
    else
        std::cout << this->_name << " \"" << str << "\"" << std::endl;
}