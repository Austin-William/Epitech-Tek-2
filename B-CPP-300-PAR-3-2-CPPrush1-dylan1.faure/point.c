/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    (void)this;
}

static char *Point_print_elem(PointClass *this)
{
    size_t size = snprintf(NULL, 0, "<Point (%d, %d)>", this->x, this->y);
    char *str = malloc(sizeof(char) * size + 1);

    snprintf(str, size + 1, "<Point (%d, %d)>", this->x, this->y);

    return (str);
}

static Object *Point_print_add(Object *p1, Object *p2)
{
    Object *res = new(Point, ((PointClass *)p1)->x, ((PointClass *)p1)->y);

    ((PointClass *)res)->x = ((PointClass *)p1)->x + ((PointClass *)p2)->x;
    ((PointClass *)res)->y = ((PointClass *)p1)->y + ((PointClass *)p2)->y;

    return (res);
}

static Object *Point_print_sub(Object *p1, Object *p2)
{
    Object *res = new(Point, ((PointClass *)p1)->x, ((PointClass *)p1)->y);

    ((PointClass *)res)->x = ((PointClass *)p1)->x - ((PointClass *)p2)->x;
    ((PointClass *)res)->y = ((PointClass *)p1)->y - ((PointClass *)p2)->y;

    return (res);
}

static const PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&Point_print_elem,
        .__add__ = (binary_operator_t)&Point_print_add,
        .__sub__ = (binary_operator_t)&Point_print_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class   *Point = (const Class *)&_description;
