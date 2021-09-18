/*
** EPITECH PROJECT, 2020
** my_str_to_word_array.c
** File description:
** my_str_to_word_array
*/

#include <stddef.h>
#include <stdlib.h>

int calc_nb_word(char const *str, char separator)
{
    int nb_word = 1;

    for (int count = 0; str[count] != '\0'; count++)
        if (str[count] == separator)
            nb_word++;
    return (nb_word);
}

char **add_word(char **word_array, char const *str, char separator, int count)
{
    int start_letter = 0;
    int nb_separator = 0;
    int size_word = 0;
    int nb_letter = 0;

    for (int count2 = 0; nb_separator != count; count2++) {
        if (str[count2] == separator)
            nb_separator++;
        start_letter++;
    }
    size_word = start_letter;
    for (; str[size_word] != separator && str[size_word] != '\0'; size_word++);
    size_word -= start_letter;
    word_array[count] = malloc(sizeof(char) * (size_word + 1));
    for (; str[start_letter] != separator
                && str[start_letter] != '\0'; start_letter++) {
        word_array[count][nb_letter] = str[start_letter];
        nb_letter++;
    }
    word_array[count][start_letter] = '\0';
    return (word_array);
}

char **my_str_to_word_array(char **word_array, char const *str, char separator)
{
    int nb_word = 0;

    if (!str || !separator)
        return (NULL);
    if (!str && !separator)
        return (NULL);
    if (word_array != NULL)
        free(word_array);
    nb_word = calc_nb_word(str, separator);
    word_array = malloc(sizeof(char *) * (nb_word + 1));
    if (word_array == NULL)
        return NULL;
    for (int count = 0; count != nb_word; count++)
        word_array = add_word(word_array, str, separator, count);
    word_array[nb_word] = NULL;
    return (word_array);
}
