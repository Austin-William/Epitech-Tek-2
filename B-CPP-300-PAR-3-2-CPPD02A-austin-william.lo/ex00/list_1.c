/*
** EPITECH PROJECT, 2021
** list
** File description:
** list
*/

#include "double_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t new_node = NULL;
    double_list_t last_node = NULL;

    front_ptr = malloc(sizeof(double_list_t));
    new_node = malloc(sizeof(double_list_t));
    last_node = malloc(sizeof(double_list_t));
    if (!front_ptr || !new_node || !last_node)
        return (false);
    new_node->value = elem;
    if (!(*front_ptr)) {
        front_ptr = new_node;
        return (true);
    }
    last_node = front_ptr;
    while (last_node)
        last_node = last_node->next;
    last_node = front_ptr;
}