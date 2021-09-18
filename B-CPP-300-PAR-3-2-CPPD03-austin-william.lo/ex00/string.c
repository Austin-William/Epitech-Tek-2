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

void string_destroy(string_t *this)
{
    if (this)
        free(this->str);
    else
        return;
}