/*
** EPITECH PROJECT, 2021
** Neutrinos.c
** File description:
** Neutrinos.c
*/

#include "Neutrinos.hpp"

Neutrinos::Neutrinos()
{
    this->_n = 0;
    this->_a = 0;
    this->_h = 0;
    this->_sd = 0;
    this->_input = NULL;
}

Neutrinos::~Neutrinos()
{
}

const int Neutrinos::startNeutrinos(char **av)
{
    int input_n = 0;
    int input_a = 0;
    int input_h = 0;
    int input_sd = 0;
    int loop = 0;
    float nb = 0;
    std::string input;

    if (charisnb(av[1][0]) == -1 || charisnb(av[2][0]) == -1 || charisnb(av[3][0]) == -1 || charisnb(av[4][0]) == -1) {
        printf("Invalid parameter(s).\n");
        return (84);
    }
    input_n = atoi(av[1]);
    input_a = atoi(av[2]);
    input_h = atoi(av[3]);
    input_sd = atoi(av[4]);
    if (input_n < 0 || input_a < 0 || input_h < 0 || input_sd < 0)
        return (84);
    this->_n = input_n;
    this->_a = input_a;
    this->_h = input_h;
    this->_sd = input_sd;
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
        if (charisnb(this->_input[0]) == -1)
            break;
        nb = atoi(this->_input);
        if (nb < 0)
            break;
        this->_n++;
        this->_data.push_back(nb);
        if (strcmp(this->_input, "END") == 0) {
            loop = 1;
            break;
        }
        calculRootMeanSquare(nb);
        calculStandardDeviation(nb);
        calculArithemtic(nb);
        calculHarmonicMean(nb);
        displayNeutrinos(nb);
    }
    return (0);
}