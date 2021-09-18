/*
** EPITECH PROJECT, 2021
** cpu_3
** File description:
** cpu_3
*/

#include "Cpu.hpp"


void Cpu::setModel()
{
    std::ifstream fs("/proc/cpuinfo");
    std::string tmp;

    if (fs.is_open())
    {
        while (tmp.find("model name") != 0)
            getline(fs, tmp);
        tmp = tmp.substr(13, tmp.size() - 13);
        this->model = tmp;
        fs.close();
    }
}

void Cpu::setFrequency()
{
    std::ifstream fs("/proc/cpuinfo");
    std::string tmp;

    if (fs.is_open())
    {
        while (tmp.find("cpu MHz") != 0)
            getline(fs, tmp);
        tmp = tmp.substr(11, tmp.size() - 11);
        this->frequency = std::stof(tmp.c_str());
        fs.close();
    }
}

void Cpu::setNbICores()
{
    std::ifstream fs("/proc/cpuinfo");
    std::string tmp;

    if (fs.is_open())
    {
        while (tmp.find("cpu ICores") != 0)
            getline(fs, tmp);
        tmp = tmp.substr(12, tmp.size() - 12);
        this->nbICores = std::stoi(tmp.c_str());
        fs.close();
    }
}

void Cpu::setNbCpu()
{
    std::ifstream fs("/proc/stat");
    std::string tmp;
    int i = -1;

    if (fs.is_open())
    {
        while (getline(fs, tmp))
        {
            if (tmp.find("cpu") != tmp.npos)
                ++i;
        }
        fs.close();
    }
    this->nbCpu = i;
}