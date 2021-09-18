/*
** EPITECH PROJECT, 2021
** ram.hpp
** File description:
** ram.hpp
*/

#ifndef RAM_HPP_
#define RAM_HPP_

#include "IMonitorModule.hpp"

class Ram
{
private:
    std::string _name;
    std::string _descr;
    std::string _total;
    std::string _available;
    std::string _usage;

public:
    Ram();
    Ram(Ram const &r);
    ~Ram();
    virtual const std::string getName() const;
    virtual const std::string getDescr() const;
    const std::string getTotal() const;
    const std::string getAvailable() const;
    const std::string getUsage() const;
    Ram &operator=(Ram const &r);
};

#endif