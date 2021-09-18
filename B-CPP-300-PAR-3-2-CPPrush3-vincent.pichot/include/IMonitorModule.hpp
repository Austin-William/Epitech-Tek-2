/*
** EPITECH PROJECT, 2021
** IMonitorModule.hpp
** File description:
** IMonitorModule.hpp
*/

#ifndef IMONITORMODULE_HPP_
#define IMONITORMODULE_HPP_

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <vector>
#include <thread>

class IMonitorModule //Mother class
{
public:
    IMonitorModule() {};
    ~IMonitorModule() {};
    const std::string getName() const;
    const std::string getDescr() const;
};

#endif