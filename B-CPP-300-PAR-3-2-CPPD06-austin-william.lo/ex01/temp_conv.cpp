/*
** EPITECH PROJECT, 2021
** temp_conv.c
** File description:
** temp_conv.c
*/

#include <iostream>
#include <string>
#include <iomanip>

void convert_celsius(float temperature)
{
    float res = (temperature - 32) * 5 / 9;

    std::cout << std::setw(16) << std::fixed << std::setprecision(3) << res
        << std::setw(16) << "Celsius" << std::endl;
}

void convert_fahrenheit(float temperature)
{
    float res = (temperature * 9 / 5) + 32;

    std::cout << std::setw(16) << std::fixed << std::setprecision(3) << res
        << std::setw(16) << "Fahrenheit" << std::endl;
}

int main(void)
{
    float temperature = 0;

    std::string scale;
    std::cin >> temperature >> scale;
    if (scale == "Celsius")
        convert_fahrenheit(temperature);
    else if (scale == "Fahrenheit")
        convert_celsius(temperature);
    return (0);
}