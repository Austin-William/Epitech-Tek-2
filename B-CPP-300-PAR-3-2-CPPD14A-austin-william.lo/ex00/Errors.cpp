/*
** EPITECH PROJECT, 2021
** errors.cpp
** File description:
** errors.cpp
*/

#include "Errors.hpp"

NasaError::NasaError(std::string const &message, std::string const &component) : _message(message), _component(component)
{
}

std::string const &NasaError::getComponent() const
{
    return (this->_component);
}

MissionCriticalError::MissionCriticalError(std::string const &message, std::string const &component) : NasaError(message, component)
{
}

LifeCriticalError::LifeCriticalError(std::string const &message, std::string const &component) : NasaError(message, component)
{
}

UserError::UserError(std::string const &message, std::string const &component) : NasaError(message, component)
{
}

CommunicationError::CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice")
{
}