/*
** EPITECH PROJECT, 2021
** Print_Sys.cpp
** File description:
** print system value in ncurs
*/

#include "Ncurses.hpp"

void print_sys_version_os(const System &sys)
{
    std::string s = sys.getVersionOs();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(19, 1, "System Version OS: ");
    printw(str);
}

void print_sys_version_kernel(const System &sys)
{
    std::string s = sys.getVersionKernel();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(18, 1, "System Version Kernel: ");
    printw(str);
    print_sys_version_os(sys);
}

void print_sys_des(const System &sys)
{
    std::string s = sys.getDescription();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(17, 1, "System Description: ");
    printw(str);
    print_sys_version_kernel(sys);
}

void print_sys_name()
{
    System sys;

    std::string s = sys.getSystemName();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(16, 1, "System Name: ");
    printw(str);
    print_sys_des(sys);
}
