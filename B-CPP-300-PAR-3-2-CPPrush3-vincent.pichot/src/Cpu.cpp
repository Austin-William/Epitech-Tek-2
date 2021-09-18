/*
** EPITECH PROJECT, 2021
** Cpu.cpp
** fs description:
** Cpu.cpp
*/

#include "Cpu.hpp"

Cpu::Cpu()
{
    this->name = "Cpu";
    this->desc = "CPU Information";
    this->setModel();
    this->setNbICores();
    this->setNbCpu();
}

Cpu::~Cpu() {}

Cpu::Cpu(const Cpu &c)
{
    this->name = c.name;
    this->desc = c.desc;
    this->model = c.getModelCpu();
    this->frequency = c.getFrequency();
    this->nbICores = c.getNbICores();
    this->cacheSize = c.getCacheSize();
    this->adress = c.getAdress();
}

Cpu &Cpu::operator=(const Cpu &c)
{
    this->name = c.name;
    this->desc = c.desc;
    this->model = c.getModelCpu();
    this->frequency = c.getFrequency();
    this->nbICores = c.getNbICores();
    this->cacheSize = c.getCacheSize();
    this->adress = c.getAdress();
    return (*this);
}

const std::string Cpu::getName() const
{
    return (this->name);
}

const std::string Cpu::getDescription() const
{
    return (this->desc);
}

const std::string Cpu::getModelCpu() const
{
    return (this->model);
}

const std::string Cpu::getFrequency() const
{
    std::ifstream fs("/proc/cpuinfo");
    std::string tmp;

    if (fs.is_open())
    {
        while (tmp.find("cpu MHz") != 0)
            getline(fs, tmp);
        tmp = tmp.substr(11, tmp.size() - 11);
        fs.close();
    }
    return (tmp);
}

const std::string Cpu::getCacheSize() const
{
    std::ifstream fs("/proc/cpuinfo");
    std::string tmp;

    if (fs.is_open())
    {
        while (tmp.find("cache size") != 0)
            getline(fs, tmp);
        tmp = tmp.substr(0, tmp.size());
        fs.close();
    }
    return (tmp);
}

const std::string Cpu::getAdress() const
{
    std::ifstream fs("/proc/cpuinfo");
    std::string tmp;

    if (fs.is_open())
    {
        while (tmp.find("address sizes") != 0)
            getline(fs, tmp);
        tmp = tmp.substr(0, tmp.size());
        fs.close();
    }
    return (tmp);
}

const int Cpu::getNbICores() const
{
    return (this->nbICores);
}

const int Cpu::getNbCpu() const
{
    return (this->nbCpu);
}