/*
** EPITECH PROJECT, 2021
** picture.hpp
** File description:
** picture.hpp
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

#ifndef PICTURE_HPP_
#define PICTURE_HPP_

class Picture
{
public:
    Picture();
    Picture(const Picture &picture);
    Picture(const std::string &file);
    ~Picture();
    std::string data;
    bool getPictureFromFile(const std::string &file);
    Picture &operator<<(const Picture &picture);
};

#endif