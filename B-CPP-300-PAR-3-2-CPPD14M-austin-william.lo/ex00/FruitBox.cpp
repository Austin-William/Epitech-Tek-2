/*
** EPITECH PROJECT, 2021
** fruitbox.cpp
** File description:
** fruitbox.cpp
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size) : _size(size), _nbrFruits(0), _list(0) {}

FruitBox::~FruitBox() {}

int FruitBox::nbFruits() const
{
    return this->_nbrFruits;
}

bool FruitBox::putFruit(Fruit *f)
{
    FruitNode *tmp_list = this->_list;
    FruitNode *element;

    if (this->_nbrFruits == this->_size)
        return false;
    for (; tmp_list != 0 && tmp_list->fruit != f; tmp_list = tmp_list->next);
    if (tmp_list != 0)
        return (false);
    element = new FruitNode();
    element->fruit = f;
    tmp_list = this->_list;
    if (tmp_list == 0)
        this->_list = element;
    else
    {
        for (; tmp_list != 0 && tmp_list->next != 0; tmp_list = tmp_list->next);
        tmp_list->next = element;
    }
    this->_nbrFruits++;
    return (true);
}

Fruit *FruitBox::pickFruit()
{
    Fruit *f;

    f = this->_list ? this->_list->fruit : 0;
    if (this->_list)
        this->_list = this->_list->next;
    this->_nbrFruits--;
    return (f);
}

FruitNode *FruitBox::head()
{
    return this->_list;
}