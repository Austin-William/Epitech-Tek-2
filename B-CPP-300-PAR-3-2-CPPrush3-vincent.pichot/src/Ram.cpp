/*
** EPITECH PROJECT, 2021
** ram.cpp
** File description:
** ram.cpp
*/

#include "Ram.hpp"
#include "Cpu.hpp"

Ram::Ram()
{
    this->_name = "Ram";
    this->_descr = "Ram Utilisation";
}

Ram::Ram(Ram const &r)
{
    this->_name = r._name;
    this->_descr = r._descr;
    this->_total = r.getTotal();
    this->_usage = r.getUsage();
    this->_available = r.getAvailable();
}

Ram::~Ram()
{
}

Ram &Ram::operator=(Ram const &r)
{
    this->_name = r._name;
    this->_descr = r._descr;
    this->_available = r.getAvailable();
    this->_total = r.getTotal();
    this->_usage = r.getUsage();
    return (*this);
}

const std::string Ram::getName() const
{
    return (this->_name);
}

const std::string Ram::getDescr() const
{
    return (this->_descr);
}

const std::string Ram::getAvailable() const
{
    std::ifstream fs("/proc/meminfo");
    std::string tmp;

    if (fs.is_open())
    {
        while (tmp.find("MemFree") != 0)
        {
            std::getline(fs, tmp);
        }
    }
    tmp = tmp.substr(tmp.find(":") + 8);
    return (tmp);
}

const std::string Ram::getTotal() const
{
    std::ifstream fs("/proc/meminfo");
    std::string tmp;

    if (fs.is_open())
    {
        while (tmp.find("MemTotal") != 0)
        {
            std::getline(fs, tmp);
        }
    }
    tmp = tmp.substr(tmp.find(":") + 8);
    return (tmp);
}

const std::string Ram::getUsage() const
{
    int result = 0;
    int a = std::stoi(this->getTotal());
    int b = std::stoi(this->getAvailable());

    result = a - b;
    return (convertIntToStr(result));
}