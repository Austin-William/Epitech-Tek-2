/*
** EPITECH PROJECT, 2021
** groundhog.c
** File description:
** groundhog.c
*/

#include "Groundhog.hpp"

Groundhog::Groundhog()
{
    this->_g = 0;
    this->_r = 0;
    this->_last_day_r = 0;
    this->_s = 0;
    this->_switches = 0;
    this->_input = NULL;
}

Groundhog::~Groundhog()
{
}

const int Groundhog::startGroundhog(char **av)
{
    int period = 0;
    int loop = 0;
    float nb = 0;
    std::string input;

    if (charisnb(av[1][0]) == -1) {
        printf("Invalid parameter(s).\n");
        return (84);
    }
    period = atoi(av[1]);
    if (period < 0)
        return (84);
    while (loop == 0) {
        this->_input = (char *)malloc(sizeof(char *));
        if (!this->_input) {
            loop = 1;
            return (84);
        }
        if (!getline(std::cin, input)) {
            loop = 1;
            return (84);
        }
        this->_input = (char *)input.c_str();
        if (charisnb(this->_input[1]) == -1)
            break;
        nb = atof(this->_input);
        if (nb < 0)
            break;
        this->_data.push_back(nb);
        if (strcmp(this->_input, "STOP") == 0) {
            loop = 1;
            break;
        }
        calculTemparatureIncreaseAverage(period);
        calculRelativeTemperatureEvolution(period);
        calculStandardDeviation(period);
        displayGroundhog(period);
    }
    std::cout << "Global tendency switched " << this->_switches << " times" << std::endl;
    return (0);
}