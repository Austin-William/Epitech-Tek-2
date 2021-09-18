/*
** EPITECH PROJECT, 2021
** toy.hpp
** File description:
** toy.hpp
*/

#include <iostream>
#include <string>
#include "Picture.hpp"

#ifndef TOY_HPP_
#define TOY_HPP_

class Toy
{
public:
    typedef enum ToyType_s
    {
        BASIC_TOY,
        ALIEN
    } ToyType;

private:
    std::string _name;
    ToyType _type;
    Picture _picture;

public:
    Toy();
    Toy(const Toy &toy);
    Toy(ToyType toyType, const std::string &name, const std::string &filename);
    ~Toy();
    const ToyType getType() const;
    const std::string getName() const;
    const std::string getAscii() const;
    void setName(const std::string &name);
    bool setAscii(const std::string &filename);
    Toy &operator<<(const Toy &toy);
};

#endif