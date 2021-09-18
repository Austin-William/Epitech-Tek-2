/*
** EPITECH PROJECT, 2021
** string.c
** File description:
** string.c
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    int len = strlen(this->str);

    if (this)
        if (pos > len)
            return (-1);
    return (this->str);
}