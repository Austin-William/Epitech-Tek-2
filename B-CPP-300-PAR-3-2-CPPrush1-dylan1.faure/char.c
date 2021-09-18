/*:
** EPITECH PROJECT, 2018
** char.c
** File description:
** char.c
*/

#include <stdio.h>
#include "char.h"
#include "new.h"

typedef struct
{
    Class base;
    char letter;
}   CharClass;

static void Char_ctor(CharClass *this, va_list *args)
{
    this->letter = va_arg(*args, int);
}

static void Char_dtor(CharClass *this)
{
    (void)this;
}

static char *Char_print_elem(CharClass *this)
{
    size_t size = snprintf(NULL, 0, "<Char (%i)>", this->letter);
    char *str = malloc(sizeof(char) * size + 1);

    snprintf(str, size + 1, "<Char (%i)>", this->letter);
    return (str);
}

static Object *Char_print_add(Object *p1, Object *p2)
{
    Object *result = new(Char, ((CharClass *)p1)->letter);

    ((CharClass *)result)->letter = ((CharClass *)p1)->letter + ((CharClass *)p2)->letter;
    return (result);
}

static Object *Char_print_sub(Object *p1, Object *p2)
{
    Object *result = new(Char, ((CharClass *)p1)->letter);

    ((CharClass *)result)->letter = ((CharClass *)p1)->letter - ((CharClass *)p2)->letter;
    return (result);
}

static Object *Char_print_mul(Object *p1, Object *p2)
{
    Object *result = new(Char, ((CharClass *)p1)->letter);

    ((CharClass *)result)->letter = ((CharClass *)p1)->letter * ((CharClass *)p2)->letter;
    return (result);
}

static Object *Char_print_div(Object *p1, Object *p2)
{
    Object *result = new(Char, ((CharClass *)p1)->letter);

    ((CharClass *)result)->letter = ((CharClass *)p1)->letter / ((CharClass *)p2)->letter;
    return (result);
}

static bool Char_print_eq(Object *p1, Object *p2)
{
    if (((CharClass * )p1)->letter == ((CharClass *)p2)->letter)
        return (true);
    else
        return (false);
}

static bool Char_print_gt(Object *p1, Object *p2)
{
    if (((CharClass * )p1)->letter > ((CharClass *)p2)->letter)
        return (true);
    else
        return (false);
}

static bool Char_print_lt(Object *p1, Object *p2)
{
    if (((CharClass * )p1)->letter < ((CharClass *)p2)->letter)
        return (true);
    else
        return (false);
}

static const CharClass _description = {
    {
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&Char_ctor,
        .__dtor__ = (dtor_t)&Char_dtor,
        .__str__ = (to_string_t)&Char_print_elem,
        .__add__ = (binary_operator_t)&Char_print_add,
        .__sub__ = (binary_operator_t)&Char_print_sub,
        .__mul__ = (binary_operator_t)&Char_print_mul,
        .__div__ = (binary_operator_t)&Char_print_div,
        .__eq__ = (binary_comparator_t)&Char_print_eq,
        .__gt__ = (binary_comparator_t)&Char_print_gt,
        .__lt__ = (binary_comparator_t)&Char_print_lt
    },
    .letter = 0
};

const Class   *Char = (const Class *)&_description;
