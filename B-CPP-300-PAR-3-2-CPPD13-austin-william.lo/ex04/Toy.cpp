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

void Toy::speak(const std::string &str)
{
    if (this->getType() == WOODY)
        std::cout << "WOODY: " << this->_name << " \"" << str << "\"" << std::endl;
    else if (this->getType() == BUZZ)
        std::cout << "BUZZ: " << this->_name << " \"" << str << "\"" << std::endl;
    else
        std::cout << this->_name << " \"" << str << "\"" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, const Toy &toy)
{
    return (stream << toy.getName() << std::endl << toy.getAscii() << std::endl);
}

void Toy::setStr(const std::string &str)
{
    this->_picture.data = str;
}

Toy &Toy::operator<<(const std::string &str)
{
    this->setStr(str);
    return (*this);
}