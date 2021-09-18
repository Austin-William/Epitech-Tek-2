/*
** EPITECH PROJECT, 2021
** Print_Cpu.cpp
** File description:
** print cpu value in ncurses
*/

#include "Ncurses.hpp"

void print_cpu_address(const Cpu &cpu)
{
    std::string s = cpu.getAdress();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(12, 1, "CPU ");
    printw(str);
}

void print_cpu_cache_size(const Cpu &cpu)
{
    std::string s = cpu.getCacheSize();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(11, 1, "CPU ");
    mvprintw(11, 5, str);
    print_cpu_address(cpu);
}

void print_cpu_nb_cpu(const Cpu &cpu)
{
    std::string s = std::to_string(cpu.getNbCpu());
    char *str = const_cast<char *>(s.c_str());
    mvprintw(10, 1, "CPU Number: ");
    printw(str);
    print_cpu_cache_size(cpu);
}

void print_cpu_nb_ICores(const Cpu &cpu)
{
    std::string s = std::to_string(cpu.getNbICores());
    char *str = const_cast<char *>(s.c_str());
    mvprintw(9, 1, "CPU Number ICores: ");
    printw(str);
    print_cpu_nb_cpu(cpu);
}

void print_cpu_freq(const Cpu &cpu)
{
    std::string s = cpu.getFrequency();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(8, 1, "CPU Frequency: ");
    printw(str);
    print_cpu_nb_ICores(cpu);
}

void print_cpu_model(const Cpu &cpu)
{
    std::string s = cpu.getModelCpu();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(7, 1, "CPU Model: ");
    printw(str);
    print_cpu_freq(cpu);
}

void print_cpu_des(const Cpu &cpu)
{
    std::string s = cpu.getDescription();
    char *str = const_cast<char *>(s.c_str());
    mvprintw(6, 1, "CPU Description: ");
    printw(str);
    print_cpu_model(cpu);
}
