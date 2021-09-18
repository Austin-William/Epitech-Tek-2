/*
** EPITECH PROJECT, 2021
** demography.h
** File description:
** demography.h
*/

#include <string>
#include <math.h>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <memory>
#include <map>
#include <vector>
#include <istream>

#ifndef DEMOGRAPHY_HPP_
#define DEMOGRAPHY_HPP_

class Demography
{
private:
    int _n;
    double _a;
    double _h;
    double _sd;
    double _square;
    std::vector<double> _data;
    char *_input;

public:
    Demography();
    ~Demography();
    const void print_help(void) const;
    const double isChar(char letter) const;
    const int startDemography(int ac, char **av);
    void calculStandardDeviation(const double nb);
    void calculRootMeanSquare(const double nb);
    const void displayDemography(const double nb);
};

#endif
