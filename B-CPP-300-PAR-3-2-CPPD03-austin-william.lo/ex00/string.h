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

    char (*init)(struct string_t *this, const char *s);
    char (*destroy)(struct string_t *this);
} string_t;

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);

#endif