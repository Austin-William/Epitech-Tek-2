/*
** EPITECH PROJECT, 2021
** string.h
** File description:
** string.h
*/

#ifndef STRING_H_
#define STRING_H_

#include <string.h>
#include <stdlib.h>

typedef struct string_s
{
    char *str;

    char (*append_s)(struct string_t *this, const struct string_t *ap);
    char (*append_c)(struct string_t *this, const char *ap);
} string_t;

void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);

#endif