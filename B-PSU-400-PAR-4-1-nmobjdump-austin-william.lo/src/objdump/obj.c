/*
** EPITECH PROJECT, 2021
** obj
** File description:
** obj
*/

#include "obj.h"

int launch(char *filename, Elf32_Ehdr *elf, void *buf)
{
    if (elf->e_ident[EI_CLASS] == ELFCLASS32) {
        display_objdump_32(buf, filename);
        return (0);
    }
    if (elf->e_ident[EI_CLASS] == ELFCLASS64) {
        display_objdump_64(buf, filename);
        return (0);
    }
    printf("objdump: No format supported\n");
    return (84);
}

int my_objdump(char *filename)
{
    int fd = 0;
    void *buf = NULL;
    struct stat s;
    Elf32_Ehdr *elf = NULL;

    fd = open(filename, O_RDONLY);
    if (fd != -1) {
        fstat(fd, &s);
        buf = mmap(NULL, s.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
        if (buf) {
            elf = buf;
            if (launch(filename, elf, buf) == 84) {
                printf("objdump: Return launch\n");
                return (84);
            }
        } else
            perror("mmap\n");
        close(fd);
    }
    return (0);
}