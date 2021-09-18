/*
** EPITECH PROJECT, 2021
** B-CPP-300-PAR-3-2-CPPrush3-vincent.pichot
** File description:
** Ncurses
*/

#ifndef NCURSES_HPP_
#define NCURSES_HPP_

#include <ncurses.h>
#include "Cpu.hpp"
#include "User.hpp"
#include "Date.hpp"
#include "System.hpp"
#include "Ram.hpp"

class Ncurses {
    public:
        Ncurses();
        ~Ncurses() = default;
};

void print_user();
void print_name(const User &);
void print_des(const User &);
void print_computer(const User &);
void print_cpu_name(const Cpu &cpu);
void print_cpu_des(const Cpu &cpu);
void print_cpu_model(const Cpu &cpu);
void print_cpu_freq(const Cpu &cpu);
void print_cpu_nb_ICores(const Cpu &cpu);
void print_cpu_nb_cpu(const Cpu &cpu);
void print_cpu_address(const Cpu &cpu);
void print_cpu_cache_size(const Cpu &cpu);
void print_date_name();
void print_date(const Date &);
void print_time(const Date &);
void print_sys_version_kernel(const System &sys);
void print_sys_version_os(const System &sys);
void print_sys_des(const System &sys);
void print_sys_name();
void print_ram();
void print_usage(const Ram &ram);
void print_available(const Ram &ram);
void print_total(const Ram &ram);
void print_descr(const Ram &ram);


#endif
