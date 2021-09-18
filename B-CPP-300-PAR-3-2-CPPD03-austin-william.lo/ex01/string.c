/*
** EPITECH PROJECT, 2021
** string.c
** File description:
** string.c
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    if (!this) {
        this->str = NULL;
        return;
    }
    this->str = strdup(s);
}

void assign_s(string_t *this, const string_t *str)
{
    string_init(this, str->str);
}

void assign_c(string_t *this, const char *s)
{
    string_init(this, s);
}