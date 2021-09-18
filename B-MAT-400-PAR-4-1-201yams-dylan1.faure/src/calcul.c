/*
** EPITECH PROJECT, 2021
** yams
** File description:
** yams
*/

#include "yams.h"
#include <math.h>

float factorial(float nb)
{
    if (nb <= 0)
        return (1);
    nb = factorial(nb - 1) * nb;
    return (nb);
}

float binom_coeff(float nb1, float nb2)
{
    float result = factorial(nb1) / (factorial(nb1 - nb2) * factorial(nb2));

    return (result);
}

float calcul_proba(float nb1, float nb2)
{
    float result = binom_coeff(nb1, nb2) * pow(1.00 / 6.00, nb2) * pow(5.00 / 6.00, nb1 - nb2);

    return (result);
}