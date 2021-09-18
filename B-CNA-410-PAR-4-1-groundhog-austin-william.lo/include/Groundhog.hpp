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

#ifndef GROUNDHOG_HPP_
#define GROUNDHOG_HPP_

class Groundhog
{
private:
    int _last_day_r;
    int _switches;
    double _r;
    double _g;
    double _s;
    std::vector<double> _data;
    char *_input;

public:
    Groundhog();
    ~Groundhog();
    const void print_help(void) const;
    const double charisnb(char letter) const;
    const int startGroundhog(char **av);
    void calculTemparatureIncreaseAverage(const double period);
    void calculRelativeTemperatureEvolution(const double period);
    void calculStandardDeviation(const double period);
    const void switchGestion(void);
    const void displayGroundhog(const double period);
};

#endif
