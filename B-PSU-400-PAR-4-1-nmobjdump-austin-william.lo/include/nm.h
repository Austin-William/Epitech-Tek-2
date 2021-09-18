/*
** EPITECH PROJECT, 2021
** nm
** File description:
** nm
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/mman.h>
#include <sys/stat.h>

#ifndef NM_H_
#define NM_H_

int my_nm(char **av);
int open_file(char **av);

#endif