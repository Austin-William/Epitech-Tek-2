/*
** EPITECH PROJECT, 2021
** ex00
** File description:
** ex00
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#ifndef EX00_H_
#define EX00_H_

typedef struct cthulhu_s
{
    int m_power;
    char *m_name;
} cthulhu_t;

typedef struct koala_s
{
    char m_is_a_legend;
    cthulhu_t m_parent;
} koala_t;

cthulhu_t *new_cthulhu();
koala_t *new_koala(char *name, char is_a_legend);

void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);
void eat(koala_t *this);

#endif