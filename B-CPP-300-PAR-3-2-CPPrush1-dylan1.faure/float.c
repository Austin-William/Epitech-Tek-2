/*:
** EPITECH PROJECT, 2018
** float.c
** File description:
** float.c
*/

#include <stdio.h>
#include "float.h"
#include "new.h"

typedef struct
{
    Class   base;
    float     nb;
}   FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    this->nb = va_arg(*args, int);
}

static void Float_dtor(FloatClass *this)
{
    (void)this;
}

static char *Float_print_elem(FloatClass *this)
{
    size_t size = snprintf(NULL, 0, "<Float (%f)>", this->nb);
    char *str = malloc(sizeof(Float) * size + 1);

    snprintf(str, size + 1, "<Float (%f)>", this->nb);
    return (str);
}

static Object *Float_print_add(Object *p1, Object *p2)
{
    Object *result = new(Float, ((FloatClass *)p1)->nb);

    ((FloatClass *)result)->nb = ((FloatClass *)p1)->nb + ((FloatClass *)p2)->nb;
    return (result);
}

static Object *Float_print_sub(Object *p1, Object *p2)
{
    Object *result = new(Float, ((FloatClass *)p1)->nb);

    ((FloatClass *)result)->nb = ((FloatClass *)p1)->nb - ((FloatClass *)p2)->nb;
    return (result);
}

static Object *Float_print_mul(Object *p1, Object *p2)
{
    Object *result = new(Float, ((FloatClass *)p1)->nb);

    ((FloatClass *)result)->nb = ((FloatClass *)p1)->nb * ((FloatClass *)p2)->nb;
    return (result);
}

static Object *Float_print_div(Object *p1, Object *p2)
{
    Object *result = new(Float, ((FloatClass *)p1)->nb);

    ((FloatClass *)result)->nb = ((FloatClass *)p1)->nb / ((FloatClass *)p2)->nb;
    return (result);
}

static bool Float_print_eq(Object *p1, Object *p2)
{
    if (((FloatClass *)p1)->nb == ((FloatClass *)p2)->nb)
        return (true);
    else
        return (false);
}

static bool Float_print_gt(Object *p1, Object *p2)
{
    if (((FloatClass *)p1)->nb > ((FloatClass *)p2)->nb)
        return (true);
    else
        return (false);
}

static bool Float_print_lt(Object *p1, Object *p2)
{
    if (((FloatClass *)p1)->nb < ((FloatClass *)p2)->nb)
        return (true);
    else
        return (false);
}

static const FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&Float_ctor,
        .__dtor__ = (dtor_t)&Float_dtor,
        .__str__ = (to_string_t)&Float_print_elem,
        .__add__ = (binary_operator_t)&Float_print_add,
        .__sub__ = (binary_operator_t)&Float_print_sub,
        .__mul__ = (binary_operator_t)&Float_print_mul,
        .__div__ = (binary_operator_t)&Float_print_div,
        .__eq__ = (binary_comparator_t)&Float_print_eq,
        .__gt__ = (binary_comparator_t)&Float_print_gt,
        .__lt__ = (binary_comparator_t)&Float_print_lt
    },
    .nb = 0
};

const Class   *Float = (const Class *)&_description;
