/*
** EPITECH PROJECT, 2021
** cpu.hpp
** File description:
** cpu.hpp
*/

#ifndef CPU_HPP_
#define CPU_HPP_

#include "IMonitorModule.hpp"

class Cpu : public IMonitorModule
{
private:
    std::string name;
    std::string desc;
    std::string model;
    std::string frequency;
    std::string cacheSize;
    std::string adress;
    int nbICores;
    int nbCpu;

public:
    Cpu();
    ~Cpu();
    Cpu(const Cpu &c);
    Cpu &operator=(const Cpu &c);

    virtual const std::string getName() const;
    virtual const std::string getDescription() const;
    const std::string getModelCpu() const;
    const std::string getFrequency() const;
    const std::string getCacheSize() const;
    const std::string getAdress() const;
    const int getNbICores() const;
    const int getNbCpu() const;
    void setModel();
    void setFrequency();
    void setNbICores();
    void setNbCpu();
};

std::string convertFloatToStr(float nb);
std::string convertIntToStr(int nb);

#endif