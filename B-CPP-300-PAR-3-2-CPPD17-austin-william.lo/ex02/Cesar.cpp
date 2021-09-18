/*
** EPITECH PROJECT, 2021
** cesar.cpp
** File description:
** cesar.cpp
*/

#include "Cesar.hpp"

Cesar::Cesar()
{
    this->_nb_shift = 3;
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char plainchar)
{
    if (plainchar)
    {
        if (plainchar >= 'a' && plainchar <= 'z') {
            plainchar = plainchar - 'a' + _nb_shift;
            plainchar %= 26;
            plainchar += 'a';
        }
        else if (plainchar >= 'A' && plainchar <= 'Z') {
            plainchar = plainchar - 'A' + _nb_shift;
            plainchar %= 26;
            plainchar += 'A';
        }
        std::cout << plainchar;
        _nb_shift++;
    }
}

void Cesar::decryptChar(char cipherchar)
{
    if (cipherchar)
    {
        if (cipherchar >= 'a' && cipherchar <= 'z')
        {
            cipherchar = cipherchar - 'a' - _nb_shift;
            cipherchar %= 26;
            if (cipherchar < 0)
                cipherchar += 26;
            cipherchar += 'a';
        }
        else if (cipherchar >= 'A' && cipherchar <= 'Z')
        {
            cipherchar = cipherchar - 'A' - _nb_shift;
            cipherchar %= 26;
            if (cipherchar < 0)
                cipherchar += 26;
            cipherchar += 'A';
        }
        std::cout << cipherchar;
        _nb_shift++;
    }
}

void Cesar::reset()
{
    this->_nb_shift = 3;
}