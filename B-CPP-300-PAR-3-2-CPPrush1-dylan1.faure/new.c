/*
** EPITECH PROJECT, 2021
** new.c
** File description:
** new.c
*/

#include "new.h"
#include "player.h"

Object *va_new(const Class *class, va_list *ap)
{
    Class *new_class = NULL;

    if (class) {
        new_class = malloc(class->__size__ + 1);
        if (!new_class)
            return (NULL);
        memcpy(new_class, class, class->__size__);
        if (new_class->__ctor__) {
            new_class->__ctor__(new_class, ap);
        }
    } else
        return (NULL);
    return (new_class);
}

Object *new(const Class *class, ...)
{
    Class *new_class = NULL;
    va_list ap;

    va_start(ap, class);
    if (!class)
        return (NULL);
    new_class = va_new(class, &ap);
    va_end(ap);
    return (new_class);
}

void delete(Object *ptr)
{
    if (ptr && ((Class *)ptr)->__dtor__) {
        ((Class *)ptr)->__dtor__(ptr);
        free(ptr);
    }
}
