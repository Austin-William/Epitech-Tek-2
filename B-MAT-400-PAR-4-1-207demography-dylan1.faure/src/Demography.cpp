/*
** EPITECH PROJECT, 2021
** Demography.c
** File description:
** Demography.c
*/

#include "Demography.hpp"

Demography::Demography()
{
    this->_n = 0;
    this->_a = 0;
    this->_h = 0;
    this->_sd = 0;
    this->_input = NULL;
}

Demography::~Demography()
{
}

const int Demography::startDemography(int ac, char **av)
{
    int input_n = 0;
    int input_a = 0;
    int input_h = 0;
    int input_sd = 0;
    int loop = 0;
    float nb = 0;
    std::string input;

    for (int a = 0; a < ac; a++) {
        if (isChar(av[a][0]) == -1) {
            printf("Invalid parameter(s).\n");
            return (0);
        }
    }
    while (loop == 0) {
        this->_input = (char *)malloc(sizeof(char *));
        if (!this->_input) {
            loop = 1;
            return (84);
        }
        std::cout << "Enter next value: ";
        if (!getline(std::cin, input)) {
            loop = 1;
            return (84);
        }
        this->_input = (char *)input.c_str();
        nb = atoi(this->_input);
        if (nb < 0)
            break;
        this->_n++;
        this->_data.push_back(nb);
        if (strcmp(this->_input, "END") == 0) {
            loop = 1;
            break;
        }
        calculStandardDeviation(nb);
        calculRootMeanSquare(nb);
        displayDemography(nb);
    }
    return (0);
}