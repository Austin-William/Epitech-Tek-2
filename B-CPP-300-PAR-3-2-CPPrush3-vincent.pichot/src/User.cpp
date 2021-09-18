/*
** EPITECH PROJECT, 2021
** user.cpp
** File description:
** user.cpp
*/

#include "User.hpp"

User::User()
{
    this->_nameComponent = "User";
    this->_descriptionComponent = "Username and Your computer Name";
    this->setComputerName();
    this->setUserName();
}

User::User(User const &u)
{
    this->_nameComponent = u._nameComponent;
    this->_descriptionComponent = u._descriptionComponent;
    this->_machineName = u.getComputerName();
    this->_userName = u.getUserName();
}

User::~User()
{
}

void User::setUserName()
{
    std::ifstream fs("/proc/sys/kernel/hostname");

    if (fs.is_open())
    {
        std::getline(fs, this->_userName);
        fs.close();
    }
}

void User::setComputerName()
{
    std::ifstream fs("/proc/sys/kernel/domainname");

    if (fs.is_open())
    {
        std::getline(fs, this->_machineName);
        fs.close();
    }
}

User &User::operator=(User const &u)
{
    this->_nameComponent = u.getThisName();
    this->_descriptionComponent = u.getDescription();
    this->_userName = u.getUserName();
    this->_machineName = u.getComputerName();

    return (*this);
}