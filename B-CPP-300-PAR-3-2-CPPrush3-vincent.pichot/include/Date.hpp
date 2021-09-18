/*
** EPITECH PROJECT, 2021
** date.hpp
** File description:
** date.hpp
*/

#ifndef DATE_HPP_
#define DATE_HPP_

#include "IMonitorModule.hpp"

class Date : public IMonitorModule
{
private:
    std::string _date;
    std::string _time;
    std::string _nameComponent;
    std::string _descriptionComponent;

public:
    Date();
    Date(Date const &d);
    ~Date();
    Date &operator=(Date const &d);
    const std::string getDate() const;
    const std::string getTime() const;
    const std::string getDateName() const;

    void setDate(std::string date);
};

#endif