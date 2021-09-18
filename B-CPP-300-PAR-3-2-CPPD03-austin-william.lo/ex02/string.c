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

void append_s(string_t *this, const string_t *ap)
{
    string_init(this, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    string_init(this, ap);
}