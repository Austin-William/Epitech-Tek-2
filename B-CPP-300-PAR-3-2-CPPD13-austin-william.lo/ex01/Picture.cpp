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
   std::ifstream fs(file);
    char a;

    if (!fs.is_open()) {
        this->data = "ERROR";
    }
    while (fs.get(a)) {
        this->data += a;
    }
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
    std::ifstream fs(file);
    char a;

    if (!fs.is_open()) {
        this->data = "ERROR";
        return (false);
    }
    while (fs.get(a)) {
        this->data += a;
    }
    return (true);
}

Picture &Picture::operator=(const Picture &picture)
{
    this->data = picture.data;
    return (*this);
}