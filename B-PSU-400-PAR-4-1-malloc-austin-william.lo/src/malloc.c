/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc
*/

#include "malloc.h"
#include "struct.h"

malloc_t *start = NULL;
malloc_t *end = NULL;
size_t size_page = 0;

malloc_t *find_block(malloc_t *tmp, size_t size)
{
    malloc_t *new_block = NULL;

    if (tmp->size - (size + sizeof(malloc_t)) >= (size_t)8) {
        new_block = (malloc_t *)((void *)tmp +
                                 sizeof(malloc_t) + size);
        new_block->first = tmp;
        new_block->next = tmp->next;
        new_block->size = tmp->size - (size + sizeof(malloc_t));
        if (tmp->next)
            tmp->next->first = new_block;
        tmp->next = new_block;
        tmp->size = size;
        if (end == tmp)
            end = new_block;
    }
    tmp->status = false;
    return (tmp);
}

malloc_t *allocate_page_memory(size_t size, size_t page, malloc_t *block)
{
    page = (sizeof(malloc_t) + size - 1) /
        size_page * size_page + size_page;
    block = sbrk(page);
    if (!block)
        return (NULL);
    block->first = end;
    block->size = size;
    block->status = false;
    if (end)
        end->next = block;
    end = block;
    block->size = page - sizeof(malloc_t);
    block = find_block(block, size);
    return (block);
}

void *init_block_memory(size_t size)
{
    malloc_t *block = NULL;
    malloc_t *tmp = start;
    size_t page = 0;

    while (!block && tmp) {
        if (tmp->size >= size && tmp->status)
            block = find_block(tmp, size);
        tmp = tmp->next;
    }
    if (!block) {
        block = allocate_page_memory(size, page, block);
        if (!block)
            return (NULL);
    }
    if (!start)
        start = block;
    return (block);
}

void *malloc(size_t size)
{
    malloc_t *block = NULL;

    size_page = getpagesize();
    size = (size - 1) / 4 * 4 + 4;
    block = init_block_memory(size);
    return ((void *)block + sizeof(malloc_t));
}
