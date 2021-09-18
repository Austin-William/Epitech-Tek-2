/*
** EPITECH PROJECT, 2021
** obj
** File description:
** obj
*/

#include "obj.h"

int check_format(Elf64_Ehdr *elf, char *path)
{
    if (elf->e_ident[EI_MAG0] != ELFMAG0 ||
        elf->e_ident[EI_MAG1] != ELFMAG1 ||
        elf->e_ident[EI_MAG2] != ELFMAG2 ||
        elf->e_ident[EI_MAG3] != ELFMAG3 ||
        (elf->e_type != ET_EXEC && elf->e_type != ET_REL &&
        elf->e_type != ET_DYN)) {
        printf("objdump: < %s >: File format not recognized\n", path);
        return (84);
    }
    return (0);
}

void display_as_ascii(int value, int *list, unsigned char *str, char *t)
{
    for (int tmp = value; tmp % 16 != 0; tmp++) {
        if (tmp % 4 == 0)
            putchar(' ');
        printf("  ");
    }
    printf("  ");
    for (; *list < value; (*list)++) {
        if (isprint(str[*list]))
            printf("%c", t[*list]);
        else
            putchar('.');
    }
    while ((*list)++ % 16 != 0)
        printf(" ");
    *list = value;
    printf("\n");
}

void display_section(char *strtab, Elf64_Ehdr *elf, Elf64_Shdr *shdr, int a)
{
    unsigned char *str = (unsigned char *)((char *)elf + shdr[a].sh_offset);
    int addr = shdr[a].sh_addr;
    int tmp = 0;
    int list = 0;

    printf("Contents of section %s:\n", &strtab[shdr[a].sh_name]);
    while (tmp < (int)shdr[a].sh_size) {
        if (tmp % (int)16 == 0)
            printf(" %04x ", addr);
        printf("%02x", str[tmp++]);
        if (tmp % (int)4 == 0 && tmp % (int)16 && tmp < (int)shdr[a].sh_size)
            putchar(' ');
        if (tmp % (int)16 == 0)
            addr += 16;
        if (tmp % (int)16 == 0 || tmp >= (int)shdr[a].sh_size)
            display_as_ascii(tmp, &list, str, (char *)str);
    }
}

void next_display(Elf64_Ehdr *elf, Elf64_Shdr *shdr, char *strtab)
{
    printf("start address 0x%016x\n\n", (int)elf->e_entry);
    for (int a = 0; a < elf->e_shnum; a++) {
        if (shdr[a].sh_size && strcmp(&strtab[shdr[a].sh_name], ".strtab") &&
            strcmp(&strtab[shdr[a].sh_name], ".symtab") &&
            strcmp(&strtab[shdr[a].sh_name], ".shstrtab") &&
            strcmp(&strtab[shdr[a].sh_name], ".bss"))
            display_section(strtab, elf, shdr, a);
    }
}

void display_objdump_64(void *buf, char *filename)
{
    Elf64_Ehdr *elf = buf;
    Elf64_Shdr *shdr = NULL;
    char *strtab = NULL;

    if (check_format(elf, filename) == 84)
        return;
    shdr = (Elf64_Shdr *)(buf + elf->e_shoff);
    strtab = (char *)(buf + shdr[elf->e_shstrndx].sh_offset);
    printf("\n%s:%5cfile format\n", filename, ' ');
    if (elf->e_machine == 3) {
        printf("architecture: i386, flags 0x%08x:\n\n", elf->e_flags);
    } else {
        printf("architecture: notf, flags 0x%08x:\n\n", elf->e_flags);
    }
    next_display(elf, shdr, strtab);
}