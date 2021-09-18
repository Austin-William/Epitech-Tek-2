/*
** EPITECH PROJECT, 2021
** vertex.c
** File description:
** vertex.c
*/

#include <stdio.h>
#include "vertex.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

static void Vertex_ctor(VertexClass *v1, va_list *args)
{
    v1->x = va_arg(*args, int);
    v1->y = va_arg(*args, int);
    v1->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *v1)
{
    (void)v1;
}

static char *Vertex_print_elem(VertexClass *v1)
{
    size_t size = snprintf(NULL, 0, "<Vertex (%d, %d, %d)>", v1->x, v1->y, v1->z);
    char *str = malloc(sizeof(char) * size + 1);

    snprintf(str, size + 1, "<Vertex (%d, %d, %d)>", v1->x, v1->y, v1->z);
    return (str);
}

static char *add_addition(VertexClass *v1, VertexClass *v2)
{
    Object *res = new(Vertex, ((VertexClass *)v1)->x, 
                        ((VertexClass *)v1)->y, ((VertexClass *)v1)->z);

    ((VertexClass *)res)->x = ((VertexClass *)v1)->x + ((VertexClass *)v2)->x;
    ((VertexClass *)res)->y = ((VertexClass *)v1)->y + ((VertexClass *)v2)->y;
    ((VertexClass *)res)->z = ((VertexClass *)v1)->z + ((VertexClass *)v2)->z;

    return (res);
}

static char *add_soustraction(VertexClass *v1, VertexClass *v2)
{
    Object *res = new(Vertex, ((VertexClass *)v1)->x,
                        ((VertexClass *)v1)->y, ((VertexClass *)v1)->z);

    ((VertexClass *)res)->x = ((VertexClass *)v1)->x - ((VertexClass *)v2)->x;
    ((VertexClass *)res)->y = ((VertexClass *)v1)->y - ((VertexClass *)v2)->y;
    ((VertexClass *)res)->z = ((VertexClass *)v1)->z - ((VertexClass *)v2)->z;

    return (res);
}

static const VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&Vertex_print_elem,
        .__add__ = (binary_operator_t)&add_addition,
        .__sub__ = (binary_operator_t)&add_soustraction,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class   *Vertex = (const Class *)&_description;
