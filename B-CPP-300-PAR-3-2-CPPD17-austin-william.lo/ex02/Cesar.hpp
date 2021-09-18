/*
** EPITECH PROJECT, 2021
** cesar.hpp
** File description:
** cesar.hpp
*/

#ifndef CESAR_HPP_
#define CESAR_HPP_

#include <iostream>
#include <string>
#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod
{
protected:
    int _nb_shift;
public:
    Cesar();
    ~Cesar();
    void encryptChar(char plainchar);
    void decryptChar(char cipherchar);
    void reset();
};

#endif