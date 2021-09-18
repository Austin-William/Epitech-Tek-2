/*
** EPITECH PROJECT, 2018
** int.c
** File description:
** int.c
*/

#include <stdio.h>
#include "int.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x;
}   IntClass;

static void Int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    (void)this;
}

static char *Int_print_elem(IntClass *this)
{
    size_t size = snprintf(NULL, 0, "%d", this->x);
    char *str = malloc(sizeof(char) * size + 1);

    snprintf(str, size + 1, "%d", this->x);
    return (str);
}

static Object *Int_print_add(Object *p1, Object *p2)
{
    Object *result = new(Int, ((IntClass *)p1)->x);

    ((IntClass *)result)->x = ((IntClass *)p1)->x + ((IntClass *)p2)->x;
    return (result);
}

static Object *Int_print_sub(Object *p1, Object *p2)
{
    Object *result = new(Int, ((IntClass *)p1)->x);

    ((IntClass *)result)->x = ((IntClass *)p1)->x - ((IntClass *)p2)->x;
    return (result);
}

static Object *Int_print_div(Object *p1, Object *p2)
{
    Object *result = new(Int, ((IntClass *)p1)->x);

    ((IntClass *)result)->x = ((IntClass *)p1)->x / ((IntClass *)p2)->x;
    return (result);
}

static Object *Int_print_mul(Object *p1, Object *p2)
{
    Object *result = new(Int, ((IntClass *)p1)->x);

    ((IntClass *)result)->x = ((IntClass *)p1)->x * ((IntClass *)p2)->x;
    return (result);
}

static bool Int_print_eq(Object *p1, Object *p2)
{
    if (((IntClass *)p1)->x == ((IntClass *)p2)->x)
        return (true);
    else
        return (false);
}

static bool Int_print_lt(Object *p1, Object *p2)
{
    if (((IntClass * )p1)->x < ((IntClass *)p2)->x)
        return (true);
    else
        return (false);
}

static bool Int_print_gt(Object *p1, Object *p2)
{
    if (((IntClass * )p1)->x > ((IntClass *)p2)->x)
        return (true);
    else
        return (false);
}

static const IntClass _description = {
    {
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&Int_ctor,
        .__dtor__ = (dtor_t)&Int_dtor,
        .__str__ = (to_string_t)&Int_print_elem,
        .__add__ = (binary_operator_t)&Int_print_add,
        .__sub__ = (binary_operator_t)&Int_print_sub,
        .__mul__ = (binary_operator_t)&Int_print_mul,
        .__div__ = (binary_operator_t)&Int_print_div,
        .__eq__ = (binary_comparator_t)&Int_print_eq,
        .__gt__ = (binary_comparator_t)&Int_print_gt,
        .__lt__ = (binary_comparator_t)&Int_print_lt
    },
    .x = 0,
};

const Class   *Int = (const Class *)&_description;
