/*
** EPITECH PROJECT, 2021
** sorcerer.hpp
** File description:
** sorcerer.hpp
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

#ifndef SORCERER_HPP_
#define SORCERER_HPP_

class Sorcerer
{
protected:
    std::string _name;
    std::string _title;

public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    const std::string getName() const;
    const std::string getTitle() const;

    virtual void polymorph(const Victim &victim) const;
};

#endif