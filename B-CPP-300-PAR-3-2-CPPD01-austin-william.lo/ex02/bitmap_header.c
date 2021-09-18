/*
** EPITECH PROJECT, 2021
** bitmap_header.c
** File description:
** bitmap_header.c
*/

#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    memset(header, 0, sizeof(*header));
    header->magic = 0x424D;
    header->size = sizeof(bmp_header_t) + sizeof(bmp_info_header_t) +
        size * size;
    header->offset = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);
    header->magic = bswap_16(header->magic);
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    memset(header, 0, sizeof(*header));
    header->size = 40;
    header->palette_size = 0;
    header->bpp = 32;
    header->compression = 0;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->planes = 1;
    header->important_colors = 0;
    header->raw_data_size = size * size * 4;
    header->height = size;
    header->width = size;
}