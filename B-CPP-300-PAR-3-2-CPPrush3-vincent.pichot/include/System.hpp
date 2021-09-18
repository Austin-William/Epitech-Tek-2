/*
** EPITECH PROJECT, 2021
** system.hpp
** File description:
** system.hpp
*/

#ifndef SYSTEM_HPP_
#define SYSTEM_HPP_

#include "IMonitorModule.hpp"

class System : public IMonitorModule
{
private:
    std::string _nameComponent;
    std::string _descriptionComponent;
    std::string _versionKernel;
    std::string _isLinux;
    std::string _versionOs;

public:
    System();
    System(System const &s);
    ~System();
    System &operator=(System const &s);

    const std::string getSystemName() const;
    const std::string getDescription() const;
    const std::string getVersionKernel() const;
    const std::string getVersionOs() const;
    const std::string getIsLinux() const;
};

#endif