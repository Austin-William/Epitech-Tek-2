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

    char (*assign_s)(struct string_t *this, const struct string_t *str);
    char (*assign_c)(struct string_t *this, const char *s);
} string_t;

void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);

#endif