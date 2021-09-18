/*
** EPITECH PROJECT, 2021
** victim.hpp
** File description:
** victim.hpp
*/

#include <iostream>
#include <iomanip>
#include <string>

#ifndef VICTIM_HPP_
#define VICTIM_HPP_

class Victim
{
protected:
    std::string _name;

public:
    Victim(std::string name);
    ~Victim();
    const std::string getName() const;
    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &stream, Victim &victim);

#endif