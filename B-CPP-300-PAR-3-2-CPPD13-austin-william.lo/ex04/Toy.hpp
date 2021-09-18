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
        ALIEN,
        BUZZ,
        WOODY
    } ToyType;

protected:
    std::string _name;
    ToyType _type;
    Picture _picture;

public:
    Toy();
    Toy(const Toy &toy);
    Toy(ToyType toyType, const std::string &name, const std::string &filename);
    ~Toy();
    std::string _str;
    const ToyType getType() const;
    const std::string getName() const;
    const std::string getAscii() const;
    void setName(const std::string &name);
    bool setAscii(const std::string &filename);
    void speak(const std::string &str);
    Toy &operator<<(const std::string &str);
    void setStr(const std::string &str);
};

std::ostream &operator<<(std::ostream &stream, const Toy &toy);

#endif