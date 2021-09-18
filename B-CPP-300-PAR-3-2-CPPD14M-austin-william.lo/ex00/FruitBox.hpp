/*
** EPITECH PROJECT, 2021
** fruitbox.hpp
** File description:
** fruitbox.hpp
*/

#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
  int         _size;
  int         _nbrFruits;
  FruitNode   *_list;
public:
    FruitBox(int);
    ~FruitBox();

    int nbFruits() const;
    bool putFruit(Fruit* f);
    Fruit* pickFruit();
    FruitNode* head();
};

#endif