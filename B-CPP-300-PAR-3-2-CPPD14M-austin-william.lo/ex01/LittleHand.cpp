/*
** EPITECH PROJECT, 2021
** littlehand.cpp
** File description:
** littlehand.cpp
*/

#include "LittleHand.hpp"
#include "Lime.hpp"
#include "Banana.hpp"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    Fruit *f;
    FruitBox tmp(unsorted.nbFruits());

    while ((f = unsorted.pickFruit()))
      tmp.putFruit(f);
    while (f = tmp.pickFruit())
    {
      if (static_cast<Banana*>(f) && f->getVitamins() == 5 && bananas.nbFruits() < bananas.nbFruits())
        bananas.putFruit(f);
      else if (static_cast<Lime*>(f) && limes.nbFruits() < limes.nbFruits())
        limes.putFruit(f);
      else if (static_cast<Lemon*>(f) && lemons.nbFruits() < lemons.nbFruits())
        lemons.putFruit(f);
      else
        unsorted.putFruit(f);
    };
}