/*
** EPITECH PROJECT, 2021
** Print_Date.cpp
** File description:
** print date in ncurses
*/

#include "Ncurses.hpp"

void print_time(const Date &date)
{
    std::string s = date.getTime();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(14, 27, str);
}

void print_date(const Date &date)
{
    std::string s = date.getDate();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(14, 16, str);
    printw(" ");
    print_time(date);
}

void print_date_name()
{
    Date date;

    std::string s = date.getDateName();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(14, 1, str);
    printw(":");
    print_date(date);
}