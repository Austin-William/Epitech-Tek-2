/*
** EPITECH PROJECT, 2021
** onetime.hpp
** File description:
** onetime.hpp
*/

#ifndef ONETIME_HPP_
#define ONETIME_HPP_

#include <iostream>
#include <string>
#include "IEncryptionMethod.hpp"

class OneTime : public IEncryptionMethod
{
protected:
    int _index;
    std::string _key_char;

public:
    OneTime(const std::string &key_char);
    ~OneTime();
    virtual void encryptChar(char plainchar);
    virtual void decryptChar(char cipherchar);
    virtual void reset();
    int convertToMin(char character);
    int convertToMax(char character, char min, char max);
};

#endif