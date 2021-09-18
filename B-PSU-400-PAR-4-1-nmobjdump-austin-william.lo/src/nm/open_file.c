/*
** EPITECH PROJECT, 2021
** open file
** File description:
** open file
*/

#include "nm.h"

int open_file(char **av)
{
    int fd = 0;
    void *buf = NULL;
    struct stat s;
    Elf64_Ehdr *elf = NULL;

    fd = open(av[1], O_RDONLY);
    if (fd != -1) {
        fstat(fd, &s);
        buf = mmap(NULL, s.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
        if (buf) {
            elf = buf;
            printf ("Section Header Table : addr = %08lx, nb = %dn\n",
                elf->e_shoff, elf->e_shnum);
        }
        else {
            perror("mmap\n");
        }
        close(fd);
    } else {
        return (84);
    }
    return (0);
}