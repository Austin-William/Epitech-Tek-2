/*
** EPITECH PROJECT, 2021
** print
** File description:
** print
*/

#include "unsold.h"

float calcul_result(int nb1, int nb2, int x, int y)
{
    float result = (((nb1 - x) * (nb2 - y)) / ((5.00 * nb1 - 150.00) * (5.00 * nb2 - 150.00)));

    return (result);
}

void calcul_1(int nb1, int nb2)
{
    float result = 0.00;
    float total = 0.00;

    printf("\tX=10\tX=20\tX=30\tX=40\tX=50\tY law\n");
    for (int y = 10; y < 60; y += 10) {
        printf("Y=%d\t", y);
        for (int x = 10; x < 60; x += 10) {
            result = calcul_result(nb1, nb2, x, y);
            printf("%0.3f\t", result);
            total += result;
        }
        printf("%0.3f\n", total);
        total = 0.00;
    }
    printf("X law\t");
    for (int x = 10; x < 60; x += 10) {
        for (int y = 10; y < 60; y += 10) {
            total += calcul_result(nb1, nb2, x, y);
        }
        printf("%0.3f\t", total);
        total = 0.00;
    }
    printf("1.000\n");
}

void calcul_2(int nb1, int nb2)
{
    float total = 0.00;
    int x = 10;
    int y = 10;
    int xend = 10;
    int ystart = 10;

    printf("z\t");
    for (int a = 20; a <= 100; a += 10) {
        printf("%d", a);
        if (a != 100)
            printf("\t");
    }
    putchar('\n');
    printf("p(Z=z)\t");
    for (int z = 20; z <= 100; z += 10) {
        xend = z - 10;
        ystart = z - 10;
        if (xend >= 50)
            xend = 50;
        if (ystart >= 50)
            ystart = 50;
        x = z - 50;
        if (x <= 10)
            x = 10;
        y = ystart;
        for (; x <= xend; x += 10, y -= 10)
            total += calcul_result(nb1, nb2, x, y);
        printf("%0.3f", total);
        if (z != 100)
            printf("\t");
        total = 0.00;
    }
    putchar('\n');
}

void calcul_3(int nb1, int nb2)
{
    float expvalx = 0.0;
    float varx = 0.0;
    float expvaly = 0.0;
    float vary = 0.0;
    float expvalz = 0.0;
    float varz = 0.0;
    float total = 0.0;
    int x = 0;
    int y = 0;
    int xend = 0;
    int ystart = 0;

    for (int x = 10; x < 60; x += 10) {
        for (int y = 10; y < 60; y += 10) {
            expvalx += calcul_result(nb1, nb2, x, y) * x;
            varx += calcul_result(nb1, nb2, x, y) * (x * x);
        }
    }
    varx -= (expvalx * expvalx);
    for (int y = 10; y < 60; y += 10) {
        for (int x = 10; x < 60; x += 10) {
            total += calcul_result(nb1, nb2, x, y);
        }
        expvaly += total * y;
        vary += total * (y * y);
        total = 0.00;
    }
    vary -= (expvaly * expvaly);
    for (int z = 20; z <= 100; z += 10) {
        xend = z - 10;
        ystart = z - 10;
        if (xend >= 50)
            xend = 50;
        if (ystart >= 50)
            ystart = 50;
        x = z - 50;
        if (x <= 10)
            x = 10;
        y = ystart;
        for (; x <= xend; x += 10, y -= 10)
            total += calcul_result(nb1, nb2, x, y);
        expvalz += total * z;
        varz += total * (z * z);
        total = 0.00;
    }
    varz -= (expvalz * expvalz);
    printf("expected value of X:\t%0.1f\n", expvalx);
    printf("variance of X:\t\t%0.1f\n", varx);
    printf("expected value of Y:\t%0.1f\n", expvaly);
    printf("variance of Y:\t\t%0.1f\n", vary);
    printf("expected value of Z:\t%0.1f\n", expvalz);
    printf("variance of Z:\t\t%0.1f\n", varz);
}

int unsold(char **av)
{
    double nb1 = 0;
    double nb2 = 0;

    if (charisnb(av[1][0]) == -1 || charisnb(av[2][0]) == -1) {
        printf("Invalid parameter(s).\n");
        return (84);
    }
    nb1 = atoi(av[1]);
    nb2 = atoi(av[2]);
    if (nb1 < 50 || nb2 < 50)
        return (84);
    printf("--------------------------------------------------------------------------------\n");
    calcul_1(nb1, nb2);
    printf("--------------------------------------------------------------------------------\n");
    calcul_2(nb1, nb2);
    printf("--------------------------------------------------------------------------------\n");
    calcul_3(nb1, nb2);
    printf("--------------------------------------------------------------------------------\n");
    return (0);
}
