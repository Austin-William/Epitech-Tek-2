/*
** EPITECH PROJECT, 2021
** onetime.cpp
** File description:
** onetime.cpp
*/

#include "OneTime.hpp"

OneTime::OneTime(const std::string &key_char)
{
    this->_index = 0;
    this->_key_char = key_char;
}

OneTime::~OneTime()
{
}

void OneTime::encryptChar(char plainchar)
{
    int base = 0;
    int key_base = 0;

    if ((plainchar >= 'a' && plainchar <= 'z') || (plainchar >= 'A' && plainchar <= 'Z'))
    {
        if (plainchar > 96)
            base = 97;
        else
            base = 65;
        if (_key_char[_index] > 96)
            key_base = 97;
        else
            key_base = 65;
        plainchar = (plainchar - base + (_key_char[_index] - key_base)) % 26 + base;
    }
    std::cout << plainchar;
    _index = (_index + 1) % _key_char.size();
}

void OneTime::decryptChar(char cipherchar)
{
    int base = 0;
    int key_base = 0;

    if ((cipherchar >= 'a' && cipherchar <= 'z') || (cipherchar >= 'A' && cipherchar <= 'Z'))
    {
        if (cipherchar > 96)
            base = 122;
        else
            base = 90;
        if (_key_char[_index] > 96)
            key_base = 97;
        else
            key_base = 65;
        cipherchar = (cipherchar - base - (_key_char[_index] - key_base)) % 26 + base;
    }
    std::cout << cipherchar;
    _index = (_index + 1) % _key_char.size();
}

void OneTime::reset()
{
    this->_index = 0;
}