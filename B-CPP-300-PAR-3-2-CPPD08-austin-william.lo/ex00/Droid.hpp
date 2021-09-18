/*
** EPITECH PROJECT, 2021
** droid.hpp
** File description:
** droid.hpp
*/

#include <iostream>
#include <iomanip>
#include <string>

#ifndef DROID_HPP_
#define DROID_HPP_

class Droid
{
    std::string _serial_number;
    size_t _energy;
    const size_t _attack;
    const size_t _toughness;
    std::string *_status;

public:
    Droid(const Droid &);
    Droid(std::string);
    Droid();
    ~Droid();

    void setId(std::string);
    void setStatus(std::string *);
    void setEnergy(size_t);
    std::string getId() const;
    size_t getEnergy() const;
    size_t getAttack() const;
    size_t getToughness() const;
    std::string *getStatus() const;

    bool operator==(const Droid &) const;
    bool operator!=(const Droid &) const;

    Droid &operator<<(size_t &);
    Droid &operator=(const Droid &);
};

#endif