/*
** EPITECH PROJECT, 2021
** Demography.c
** File description:
** Demography.c
*/

#include "Demography.hpp"

const void Demography::displayDemography(const double nb)
{
    printf("\tNumber of values: \t%d\n", this->_n);
    std::cout << std::setprecision(2) << std::fixed << "\tStandard deviation:\t" << this->_sd << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "\tArithmetic mean:\t" << this->_a << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "\tRoot mean square:\t" << this->_square << std::endl;
    std::cout << std::setprecision(2) << std::fixed << "\tHarmonic mean:\t\t" << this->_h << "\n" << std::endl;
}

void Demography::calculRootMeanSquare(const double nb)
{
    this->_n = 2017 - 1960 + 1;
    this->_square = sqrt((((pow(this->_sd, 2) + pow(this->_a, 2)) * (this->_n - 1)) + pow(nb, 2)) / this->_n);
}

void Demography::calculStandardDeviation(const double nb)
{
    double sum = 0;
    double power = 0;
    double calcul = 0;
    double divide = 0;
    std::vector<double>::iterator tmp_data_iterator = this->_data.end() - nb;

    while (tmp_data_iterator != this->_data.end()) {
        sum += *tmp_data_iterator;
        power += pow(*tmp_data_iterator, 2);
        tmp_data_iterator++;
    }
    calcul = sqrt(power / nb - pow((sum / nb), 2));
    this->_sd = calcul;
}