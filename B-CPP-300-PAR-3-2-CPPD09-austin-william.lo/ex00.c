/*
** EPITECH PROJECT, 2021
** ex00
** File description:
** ex00
*/

#include "ex00.h"

static void koala_initializer(koala_t *this, char *_name, char _is_A_legend)
{
    puts("----");
    puts("Building Cthulhu");
    this->m_parent.m_name = _name;
    if (_is_A_legend == 1)
        puts("Building Legend");
    else if (_is_A_legend == 0) {
        puts("Building NotLegend");
        this->m_parent.m_power = 0;
    }
}

static void cthulhu_initializer(cthulhu_t *this)
{
    puts("----");
    puts("Building Cthulhu");
    this->m_name = "Cthulhu";
    this->m_power = 42;
}

cthulhu_t *new_cthulhu()
{
    cthulhu_t *this = malloc(sizeof(cthulhu_t));

    cthulhu_initializer(this);
    return (this);
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (this->m_power >= 42) {
        this->m_power -= 42;
        printf("%s attacks and destroys the city\n", this->m_name);
    } else {
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
    }
}

void sleeping(cthulhu_t *this)
{
    this->m_power += 42000;
    printf("%s sleeps\n", this->m_name);
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *this = malloc(sizeof(koala_t));

    if (!this)
        return (NULL);
    this->m_parent.m_name = name;
    this->m_parent.m_power = 42;
    koala_initializer(this, this->m_parent.m_name, is_a_legend);
    return (this);
}

void eat(koala_t *this)
{
    if (this) {
        this->m_parent.m_power += 42;
        printf("%s eats\n", this->m_parent.m_name);
    }
}