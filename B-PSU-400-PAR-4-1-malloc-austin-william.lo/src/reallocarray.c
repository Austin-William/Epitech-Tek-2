/*
** EPITECH PROJECT, 2021
** reallocarray
** File description:
** reallocarray
*/

#include "malloc.h"

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
    if ((int)nmemb < 0 || (int)size < 0)
        return (NULL);
    if (nmemb >= ((size_t)1 << (sizeof(size_t) * 4))
        || size >= ((size_t)1 << (sizeof(size_t) * 4)
        && nmemb > 0 && __SIZE_MAX__ / nmemb < size))
        return (NULL);
    return (realloc(ptr, nmemb * size));
}