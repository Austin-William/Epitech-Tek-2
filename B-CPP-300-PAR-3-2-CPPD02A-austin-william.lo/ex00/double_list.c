/*
** EPITECH PROJECT, 2021
** double list
** File description:
** double_list.c
*/

#include "double_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int double_list_get_size(double_list_t list)
{
    int nb = 0;

    while (list) {
        nb++;
        list = list->next;
    }
    return (nb);
}

bool double_list_is_empty(double_list_t list)
{
    if (list)
        return (true);
    else
        return (false);
}

void double_list_dump(double_list_t list)
{
    while (list) {
        printf("%f", list->value);
        list = list->next;
    }
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new_node = NULL;

    front_ptr = malloc(sizeof(double_list_t));
    if (!elem || !double_list_is_empty(*front_ptr))
        return (false);
    new_node = malloc(sizeof(double_list_t));
    if (!new_node)
        return (false);
    new_node->value = elem;
    new_node->next = *front_ptr;
    front_ptr = &new_node;
    return (true);
}