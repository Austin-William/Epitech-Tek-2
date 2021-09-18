/*
** EPITECH PROJECT, 2021
** giftpaper.hpp
** File description:
** giftpaper.hpp
*/

#include <iostream>
#include "Wrap.hpp"

#ifndef GIFTPAPER_HPP_
#define GIFTPAPER_HPP_

class GiftPaper : public Wrap
{
public:
    GiftPaper(const std::string &Title);
    ~GiftPaper();
};

#endif