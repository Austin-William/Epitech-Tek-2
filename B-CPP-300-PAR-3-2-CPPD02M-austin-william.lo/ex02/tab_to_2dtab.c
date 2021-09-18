/*
** EPITECH PROJECT, 2021
** tab_to_2tab.c
** File description:
** tab_to_2tab.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    *res = malloc(sizeof(int *) * length + 1);
    for (int a = 0; a <= length; a++) {
        (*res)[a] = malloc(sizeof(int) * width + 1);
        for (int b = 0; b <= width; b++) {
            (*res)[a][b] = tab[a * width + b];
        }
    }
}