/*
** EPITECH PROJECT, 2021
** Print_User.cpp
** File description:
** print value in ncurses
*/

#include "Ncurses.hpp"

void print_cpu_name(const Cpu &cpu)
{
    std::string s = cpu.getName();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(5, 1, "CPU Name: ");
    printw(str);
    print_cpu_des(cpu);
}

void print_computer(const User &u)
{
    Cpu cpu;

    std::string s = u.getComputerName();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(3, 1, "ComputerName: ");
    printw(str);
    print_cpu_name(cpu);
}

void print_des(const User &u)
{
    std::string s = u.getDescription();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(2, 1, "Description: ");
    printw(str);
    print_computer(u);
}

void print_name(const User &u)
{
    std::string s = u.getThisName();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(1, 1, "Name: ");
    printw(str);
    print_des(u);
}

void print_user()
{
    User u;

    std::string s = u.getUserName();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(0, 1, "User: ");
    printw(str);
    print_name(u);
}