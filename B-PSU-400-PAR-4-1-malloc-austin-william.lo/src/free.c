/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "malloc.h"
#include "struct.h"

void init_free(malloc_t *block)
{
    malloc_t *next_block;

    if (block->next && block->next->status) {
        next_block = block->next;
        block->size += next_block->size + sizeof(malloc_t);
        if (end == next_block)
            end = block;
    }
}

void check_free_next_block(malloc_t *block)
{
    malloc_t *first = NULL;

    if (block->first) {
        first = block->first;
        first->size += block->size + sizeof(malloc_t);
        if (block->next)
            block->next->first = first;
        if (end == block)
            end = first;
    }
}

malloc_t *check_block(malloc_t *block, void *ptr)
{
    if (!ptr)
        return (NULL);
    else if (!start)
        abort();
    block = ptr - sizeof(malloc_t);
    if (block->status)
        abort();
    return (block);
}

void free(void *ptr)
{
    malloc_t *block = NULL;
    malloc_t *tmp = NULL;

    block = check_block(block, ptr);
    if (!block)
        return;
    init_free(block);
    check_free_next_block(block);
    if (end->status && end->first) {
        if (start == end)
            start = NULL;
        tmp = end;
        end = end->first;
        if (end)
            end->next = NULL;
        sbrk((tmp->size + sizeof(malloc_t)) * -1);
    }
}