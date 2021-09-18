/*
** EPITECH PROJECT, 2021
** realloc
** File description:
** realloc
*/

#include "malloc.h"
#include "struct.h"

void *realloc(void *ptr, size_t size)
{
    void *new_ptr = malloc(size);
    char *tmp1 = NULL;
    char *tmp2 = NULL;

    if (!ptr)
        return (malloc(size));
    if (size == 0 || !new_ptr)
        return (NULL);
    tmp1 = ptr;
    tmp2 = new_ptr;
    for (size_t a = 0; a < 1024; a++, tmp1++, tmp2++)
        *tmp2 = *tmp1;
    memcpy(new_ptr, ptr + sizeof(malloc_t) + size, size);
    return (new_ptr);
}