/*
** EPITECH PROJECT, 2021
** warpsystem.cpp
** File description:
** warpsystem.cpp
*/

#include "WarpSystem.hpp"

WarpSystem::ICore::ICore(QuantumReactor *ICoreReactor)
{
    this->_ICoreReactor = ICoreReactor;
}

WarpSystem::ICore::~ICore()
{
}

WarpSystem::QuantumReactor::QuantumReactor()
{
    this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
}

WarpSystem::QuantumReactor *WarpSystem::ICore::checkReactor(void)
{
    return (this->_ICoreReactor);
}

bool WarpSystem::QuantumReactor::isStable(void)
{
    if (this->_stability == true)
        return (true);
    else if (this->_stability == false)
        return (false);
    else
        return (NULL);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    this->_stability = stability;
}