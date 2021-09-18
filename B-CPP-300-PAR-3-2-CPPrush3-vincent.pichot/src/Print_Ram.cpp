/*
** EPITECH PROJECT, 2021
** Print_Ram.cpp
** File description:
** Print_Ram.cpp
*/

#include "Ncurses.hpp"

void print_usage(const Ram &ram)
{
    char *str = const_cast<char *>(ram.getUsage().c_str());
    mvprintw(24, 1, "RAM Usage: ");
    printw(str);
    mvprintw(24, 20, "kB");

}

void print_available(const Ram &ram)
{
    std::string s = ram.getAvailable();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(23, 1, "RAM Available: ");
    printw(str);
    mvprintw(23, 20, "kB");
    print_usage(ram);
}

void print_total(const Ram &ram)
{
    std::string s = ram.getTotal();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(22, 1, "RAM Total: ");
    printw(str);
    mvprintw(22, 20, "kB");
    print_available(ram);
}

void print_ram()
{
    Ram ram;

    char *str = const_cast<char *>(ram.getName().c_str());
    mvprintw(21, 1, "RAM Name: ");
    printw(str);
    mvprintw(21, 20, "kB");
    print_total(ram);
}