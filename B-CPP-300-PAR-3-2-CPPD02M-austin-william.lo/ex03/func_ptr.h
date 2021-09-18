/*
** EPITECH PROJECT, 2021
** funct_ptr.h
** File description:
** funct_ptr.h
*/

#include "func_ptr_enum.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#ifndef FUNCT_PTR_H_
#define FUNCT_PTR_H_

void print_normal(const char *str);
void print_upper(const char *str);
void print_reverse(const char *str);
void print_42(const char *str);
void do_action(action_t action, const char *str);

#endif