/*
** EPITECH PROJECT, 2021
** user.hpp
** File description:
** user.hpp
*/

#ifndef USER_HPP_
#define USER_HPP_

#include "IMonitorModule.hpp"

class User : public IMonitorModule
{
private:
    std::string _nameComponent;
    std::string _descriptionComponent;
    std::string _userName;
    std::string _machineName;

public:
    User();
    User(User const&u);
    ~User();

    const std::string getThisName() const { return (_nameComponent); };
    const std::string getDescription() const { return (_descriptionComponent); };
    const std::string getUserName() const { return (_userName); };
    const std::string getComputerName() const { return (_machineName);};

    void setUserName();
    void setComputerName();

    User &operator=(User const &u);
};

#endif