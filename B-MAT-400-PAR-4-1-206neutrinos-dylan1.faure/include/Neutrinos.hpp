/*
** EPITECH PROJECT, 2021
** hotline.h
** File description:
** hotline.h
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

#ifndef NEUTRINOS_HPP_
#define NEUTRINOS_HPP_

class Neutrinos
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
    Neutrinos();
    ~Neutrinos();
    const void print_help(void) const;
    const double charisnb(char letter) const;
    const int startNeutrinos(char **av);
    void calculStandardDeviation(const double nb);
    void calculArithemtic(const double nb);
    void calculRootMeanSquare(const double nb);
    void calculHarmonicMean(const double nb);
    const void displayNeutrinos(const double nb);
};

#endif
