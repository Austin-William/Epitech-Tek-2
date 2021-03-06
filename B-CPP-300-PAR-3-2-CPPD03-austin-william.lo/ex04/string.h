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

    void (*string_init)(struct string_t *this, const char *s);
    void (*string_destroy)(struct string_t *this);
    void (*assign_s)(struct string_t *this, const struct string_t *str);
    void (*assign_c)(struct string_t *this, const char *s);
    void (*append_s)(struct string_t *this, const struct string_t *ap);
    void (*append_c)(struct string_t *this, const char *ap);
    char (*at)(const struct string_t *this, size_t pos);
    void (*clear)(struct string_t *this);
} string_t;

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);
char at(const string_t *this, size_t pos);
void clear(string_t *this);

#endif