/*
** EPITECH PROJECT, 2021
** string.c
** File description:
** string.c
*/

#include "string.h"

void clear(string_t *this)
{
    if (this)
        free(this);
}