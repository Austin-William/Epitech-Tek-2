/*
** EPITECH PROJECT, 2021
** droid.cpp
** File description:
** droid.cpp
*/

#include "Droid.hpp"

Droid::Droid() : _serial_number(""), _energy(50), _attack(25), _toughness(15), _status(new std::string("Standing by"))
{
    std::cout << "Droid '' Activated" << std::endl;
}

Droid::Droid(std::string serial_number) : _energy(50), _attack(25), _toughness(15), _status(new std::string("Standing by"))
{
    this->_serial_number = serial_number;
    std::cout << "Droid '" << serial_number << "' Activated" << std::endl;
}

Droid::Droid(Droid const &droid) : _serial_number(droid.getId()), _energy(droid.getEnergy()), _attack(25), _toughness(15), _status(new std::string(*droid.getStatus()))
{
    std::cout << "Droid '" << this->_serial_number << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    std::cout << "Droid '" << this->_serial_number << "' Destroyed" << std::endl;
}

size_t Droid::getEnergy() const
{
    return (this->_energy);
}

void Droid::setEnergy(size_t energy)
{
    if (energy > 100)
        this->_energy = 100;
    else
        this->_energy = energy;
}

std::string Droid::getId() const
{
    return (this->_serial_number);
}

void Droid::setId(std::string serial_number)
{
    this->_serial_number = serial_number;
}

std::string *Droid::getStatus() const
{
    return (this->_status);
}

void Droid::setStatus(std::string *_status)
{
    this->_status = _status;
}

size_t Droid::getAttack() const
{
    return (this->_attack);
}

size_t Droid::getToughness() const
{
    return (this->_toughness);
}

bool Droid::operator==(const Droid &droid) const
{
    return (this->_serial_number == droid._serial_number &&
           this->_energy == droid._energy &&
           this->_attack == droid._attack &&
           this->_toughness == droid._toughness &&
           *this->_status == *(droid._status));
}

bool Droid::operator!=(const Droid &droid) const
{
    return (this->_serial_number != droid.getId() ||
            this->_energy != droid.getEnergy() ||
            this->_status->compare(*droid.getStatus()) != 0);
}

Droid &Droid::operator<<(size_t &reload)
{
    size_t req_value;

    if (this->_energy > 100) {
        this->_energy = 100;
        return *this;
    } else if (this->_energy + reload >= 100) {
        req_value = 100 - this->_energy;
    } else {
        req_value = reload;
    }
    this->_energy += req_value;
    reload -= req_value;
    return (*this);
}

Droid &Droid::operator=(const Droid &droid)
{
    this->_serial_number = droid.getId();
    this->_energy = droid.getEnergy();
    this->_status = new std::string(*droid.getStatus());
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Droid &droid)
{
    return (stream << "Droid '" << droid.getId() << "', " << (*droid.getStatus()) << ", " << droid.getEnergy());
}