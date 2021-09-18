/*
** EPITECH PROJECT, 2021
** Table.hpp
** File description:
** Table.hpp
*/

#include <iostream>
#include <iomanip>

#ifndef TABLE_HPP_
#define TABLE_HPP_

class ITable
{
public:
    ITable();
    virtual ~ITable();
    virtual ITable *createTable() = 0;
};


class PapaXmasTable : public ITable
{
public:
    PapaXmasTable();
    ~PapaXmasTable();
};

#endif