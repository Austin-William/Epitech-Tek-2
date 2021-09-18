/*
** EPITECH PROJECT, 2021
** date.cpp
** File description:
** date.cpp
*/

#include "Date.hpp"

Date::Date()
{
    this->_date = getDate();
    this->_time = getTime();
    this->_nameComponent = "Date and Time";
    this->_descriptionComponent = "Date and Time from your computer";
}

Date::Date(Date const &d)
{
    this->_date = d._date;
    this->_time = d._time;
    this->_descriptionComponent = _descriptionComponent;
}

Date::~Date()
{
}

Date &Date::operator=(Date const &d)
{
    this->_date = getDate();
    this->_time = getTime();
    return (*this);
}

const std::string Date::getDate() const
{
    std::ifstream fs("/proc/driver/rtc");
    std::string tmp;

    if (fs.is_open()) {
        while (tmp.find("rtc_date") != 0) {
            std::getline(fs, tmp);
        }
    }
    tmp = tmp.substr(tmp.find(":") + 2);
    return (tmp);
}

const std::string Date::getDateName() const
{
    return (this->_nameComponent);
}

const std::string Date::getTime() const
{
    std::ifstream fs("/proc/driver/rtc");
    std::string tmp;

    if (fs.is_open()) {
        while (tmp.find("rtc_time") != 0) {
            std::getline(fs, tmp);
        }
    }
    tmp = tmp.substr(tmp.find(":") + 2);
    return (tmp);
}

void Date::setDate(std::string date)
{
    this->_date = date;
}