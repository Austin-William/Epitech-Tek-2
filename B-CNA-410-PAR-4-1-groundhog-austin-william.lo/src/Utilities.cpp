/*
** EPITECH PROJECT, 2021
** groundhog.c
** File description:
** groundhog.c
*/

#include "Groundhog.hpp"

const void Groundhog::switchGestion(void)
{
    if ((this->_last_day_r < 0 && this->_r >= 0) || (this->_last_day_r >= 0 && this->_r < 0)) {
        this->_switches++;
        std::cout << "\ta switch occurs";
    }
}

const void Groundhog::displayGroundhog(const double period)
{
    std::cout << "g=" << std::ends;
    if (this->_data.size() <= period)
        std::cout << "nan\t" << std::ends;
    else {
        this->_g /= period;
        printf("%0.2f\t", this->_g);
    }
    std::cout << "r=" << std::ends;
    if (this->_data.size() <= period)
        std::cout << "nan%\t" << std::ends;
    else
        printf("%0.0f%%\t", this->_r);
    std::cout << "s=" << std::ends;
    if (this->_data.size() < period)
        std::cout << "nan\t" << std::ends;
    else
        printf("%0.2f%%", this->_s);
    switchGestion();
    std::cout << std::endl;
}

void Groundhog::calculTemparatureIncreaseAverage(const double period)
{
    double tmp_data = 0;
    int tmp = this->_data.size() - period;

    if (this->_data.size() <= period)
        return;
    while (tmp != this->_data.size()) {
        tmp_data = this->_data[tmp] - this->_data[tmp - 1];
        if (tmp_data > 0)
            this->_g += tmp_data;
        tmp++;
    }
}

void Groundhog::calculRelativeTemperatureEvolution(const double period)
{
    double tmp = 0;

    if (this->_data.size() < period)
        return;
    this->_last_day_r = this->_r;
    this->_r = round((this->_data.back() - (this->_data[this->_data.size() - period - 1])) / (this->_data[this->_data.size() - period - 1]) * 100);
}

void Groundhog::calculStandardDeviation(const double period)
{
    double sum = 0;
    double power = 0;
    double calcul = 0;
    double divide = 0;
    std::vector<double>::iterator tmp_data_iterator = this->_data.end() - period;

    if (this->_data.size() < period)
        return;
    while (tmp_data_iterator != this->_data.end()) {
        sum += *tmp_data_iterator;
        power += pow(*tmp_data_iterator, 2);
        tmp_data_iterator++;
    }
    calcul = sqrt(power / period - pow((sum / period), 2));
    this->_s = calcul;
}