/*
** EPITECH PROJECT, 2021
** littlehand.hpp
** File description:
** littlehand.hpp
*/

#ifndef LITTLEHAND_HPP_
#define LITTLEHAND_HPP_

#include <iostream>
#include "FruitBox.hpp"

class LittleHand
{
public:
    LittleHand();
    ~LittleHand();
    void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
};

#endif