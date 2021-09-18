/*
** EPITECH PROJECT, 2021
** picture.cpp
** File description:
** picture.cpp
*/

#include "Picture.hpp"
#include "Toy.hpp"

Picture::Picture()
{
    this->data = "";
}

Picture::Picture(const std::string &file)
{
    std::ifstream fs(file.c_str());
    std::string line;

    if (!fs.is_open())
    {
        fs.clear();
        this->data = "ERROR";
    }
    while (getline(fs, line, '\0')) {
        this->data += line;
    }
    fs.close();
}

Picture::Picture(const Picture &file)
{
    this->data = file.data;
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream fs(file.c_str());
    std::string line;

    if (!fs.is_open())
    {
        fs.clear();
        this->data = "ERROR";
        return (false);
    }
    while (getline(fs, line, '\0')) {
        this->data += line;
    }
    fs.close();
    return (true);
}

Picture &Picture::operator<<(const Picture &picture)
{
    this->data = picture.data;
    return (*this);
}