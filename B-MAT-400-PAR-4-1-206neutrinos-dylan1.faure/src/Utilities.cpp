/*
** EPITECH PROJECT, 2021
** Neutrinos.c
** File description:
** Neutrinos.c
*/

#include "Neutrinos.hpp"

const void Neutrinos::displayNeutrinos(const double nb)
{
    printf("\tNumber of values: \t%d\n", this->_n);
    std::cout << std::setprecision(2) << std::fixed << "\tStandard deviation:\t" << this->_sd << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "\tArithmetic mean:\t" << this->_a << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "\tRoot mean square:\t" << this->_square << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "\tHarmonic mean:\t\t" << this->_h << "\n" << std::endl;
}

void Neutrinos::calculRootMeanSquare(const double nb)
{
    this->_square = sqrt((((pow(this->_sd, 2) + pow(this->_a, 2)) * (this->_n - 1)) + pow(nb, 2)) / this->_n);
}

void Neutrinos::calculStandardDeviation(const double nb)
{
    this->_sd = sqrt((((pow(this->_sd, 2) + pow(this->_a, 2)) * (this->_n - 1) + pow(nb, 2)) / this->_n) - pow(((this->_a * (this->_n - 1)) + nb) / this->_n, 2));
}

void Neutrinos::calculArithemtic(const double nb)
{
    this->_a = (this->_a * (this->_n - 1) + nb) / this->_n;
}

void Neutrinos::calculHarmonicMean(const double nb)
{
    this->_h = this->_n / ((1 / nb) + ((this->_n - 1) / this->_h));
}