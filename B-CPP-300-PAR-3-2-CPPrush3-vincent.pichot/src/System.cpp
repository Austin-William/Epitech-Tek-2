/*
** EPITECH PROJECT, 2021
** system.cpp
** File description:
** system.cpp
*/

#include "System.hpp"

System::System()
{
    this->_nameComponent = "System";
    this->_descriptionComponent = "Information about your system";
}

System::System(System const &s)
{
    this->_versionKernel = s._versionKernel;
    this->_versionOs = s._versionOs;
    this->_isLinux = s._isLinux;
}

System::~System()
{
}

System &System::operator=(System const &s)
{
    this->_versionKernel = s.getVersionKernel();
    this->_versionOs = s.getVersionOs();
    return (*this);
}

const std::string System::getSystemName() const
{
    return (this->_nameComponent);
}

const std::string System::getDescription() const
{
    return (this->_descriptionComponent);
}

const std::string System::getVersionKernel() const
{
    std::ifstream fs("/proc/sys/kernel/osrelease");
    std::string tmp;

    if (fs.is_open()) {
        std::getline(fs, tmp);
        fs.close();
    }
    return (tmp);
}

const std::string System::getVersionOs() const
{
    std::ifstream fs("/etc/os-release");
    std::string tmp;

    if (fs.is_open()) {
        while (tmp.find("VERSION") != 0)
            std::getline(fs, tmp);
    }
    tmp = tmp.substr(9, tmp.find("\"") + 3);
    fs.close();
    return (tmp);
}

const std::string System::getIsLinux() const
{
    std::ifstream fs("/proc/sys/kernel/ostype");
    std::string tmp;

    if (fs.is_open()) {
        std::getline(fs, tmp);
        fs.close();
    }
    return (tmp);
}