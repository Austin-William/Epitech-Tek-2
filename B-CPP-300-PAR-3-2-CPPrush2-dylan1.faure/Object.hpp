/*
** EPITECH PROJECT, 2021
** object.hpp
** File description:
** object.hpp
*/

#include <iostream>
#include <iomanip>

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

class Object
{
protected:
    std::string _type_toy;
    std::string _title;
    std::string _name;
    bool _is_taken;
public:
    Object(const std::string &Name, const std::string &TypeToy);
    ~Object();
    const std::string getName() const;
    const std::string getTypeToy() const;
};

#endif