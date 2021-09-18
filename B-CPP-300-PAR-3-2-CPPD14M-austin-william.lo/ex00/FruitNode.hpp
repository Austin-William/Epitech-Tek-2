/*
** EPITECH PROJECT, 2021
** fruitnode.hpp
** File description:
** fruitnode.hpp
*/

#ifndef FRUITNODE_HPP_
#define FRUITNODE_HPP_

#include "Fruit.hpp"

typedef struct s_FruitNode
{
    Fruit *fruit;
    struct s_FruitNode *next;
} FruitNode;

#endif