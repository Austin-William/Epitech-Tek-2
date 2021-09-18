/*
** EPITECH PROJECT, 2021
** obj
** File description:
** obj
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/mman.h>
#include <sys/stat.h>

#ifndef OBJ_H_
#define OBJ_H_

int my_objdump(char *filename);

void display_objdump_32(void *buf, char *filename);
void display_objdump_64(void *buf, char *filename);

#endif