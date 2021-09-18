/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct malloc_s
{
    size_t size;
    bool status;
    struct malloc_s *first;
    struct malloc_s *next;
} malloc_t;

extern malloc_t *start;
extern malloc_t	*end;
extern size_t size_page;

#endif
