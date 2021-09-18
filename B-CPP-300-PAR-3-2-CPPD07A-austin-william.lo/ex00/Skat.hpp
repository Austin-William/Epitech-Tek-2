/*
** EPITECH PROJECT, 2021
** skat.hpp
** File description:
** skat.hpp
*/

#include <iostream>
#include <string>
#include <iomanip>

class Skat
{
    std::string _name = "bob";
    int _stimPaks = 15;

public:
    Skat(const std::string name, int stimPaks);
    ~Skat();

    const std::string &name();
    void shareStimPaks(int number, int stock);
    void addStimPaks(unsigned int number);
    void useStimPaks();
    void status();
    int stimPaks();
};