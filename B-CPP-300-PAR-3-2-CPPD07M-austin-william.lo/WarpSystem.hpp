/*
** EPITECH PROJECT, 2021
** warpsystem.hpp
** File description:
** warpsystem.hpp
*/

#include <iostream>
#include <string>
#include <iomanip>

#ifndef WARPSYSTEM_HPP_
#define WARPSYSTEM_HPP_

namespace WarpSystem
{
    class QuantumReactor
    {
        bool _stability;

    public:
        QuantumReactor();
        ~QuantumReactor();
        bool isStable();
        void setStability(bool stability);
    };

    class ICore
    {
        QuantumReactor *_ICoreReactor;

    public:
        ICore(QuantumReactor *ICoreReactor);
        ~ICore();
        QuantumReactor *checkReactor();
    };
}

#endif
