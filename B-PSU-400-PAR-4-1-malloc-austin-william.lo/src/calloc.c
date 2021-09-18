/*
** EPITECH PROJECT, 2021
** calloc
** File description:
** calloc
*/

#include "malloc.h"

void *calloc(size_t nmemb, size_t size)
{
    void *ptr = malloc(size * nmemb);
    char *tmp = NULL;

    if (nmemb == 0 || size == 0 || !ptr)
        return (NULL);
    tmp = ptr;
    for (size_t a = 0; a < 1024; a++, tmp++)
        *tmp = 0;
    return (ptr);
}
