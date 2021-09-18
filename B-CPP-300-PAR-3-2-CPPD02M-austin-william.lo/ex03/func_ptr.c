/*
** EPITECH PROJECT, 2021
** funct_ptr.c
** File description:
** funct_ptr.c
*/

#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    int a = 0;
    int len = strlen(str);
    char *rev = malloc(sizeof(char) * len + 1);

    for (int b = len - 1; b >= 0; b--) {
        rev[a++] = str[b];
    }
    rev[a] = '\0';
    printf("%s\n", rev);
}

void print_upper(const char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        printf("%c", toupper(str[a]));
    }
    printf("\n");
}

void print_42(const char *str)
{
    if (!str || str)
        printf("42\n");
}

void do_action(action_t action, const char *str)
{
    void (*ptr[4])(const char *) = {
        &print_normal,
        &print_reverse,
        &print_upper,
        &print_42,
    };
    ptr[action](str);
}