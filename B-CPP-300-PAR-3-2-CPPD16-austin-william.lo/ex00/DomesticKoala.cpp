/*
** EPITECH PROJECT, 2021
** domestickoala.cpp
** File description:
** domestickoala.cpp
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &k) : ka(k)
{
}

DomesticKoala::DomesticKoala(DomesticKoala const &k) : ka(k.ka)
{
    for (unsigned int a = 1; a < k._message.size(); a++)
        _message.push_back(k._message[a]);
    for (unsigned int b = 1; b < k._command.size(); b++)
        _command.push_back(k._command[b]);
}

DomesticKoala::~DomesticKoala()
{
}

void DomesticKoala::learnAction(unsigned char command, methodPointer_t message)
{
    if (message && command)
    {
        _message.push_back(message);
        _command.push_back(command);
    }
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    unsigned int a = 0;

    for (; _command[a] != command && a < _command.size(); a++);
    _command.erase(_command.begin() + a);
    _message.erase(_message.begin() + a);
}

void DomesticKoala::doAction(unsigned char command, const std::string &message)
{
    unsigned int a = 0;

    for (; _command[a] != command && a < _command.size(); a++);
    if (a < _command.size())
        (ka.*_message[a])(message);
}
void DomesticKoala::setKoalaAction(KoalaAction &k)
{
    ka = k;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &k)
{
    if (this != &k)
    {
        ka = k.ka;
        if (!_message.empty())
            _message.clear();
        if (!_command.empty())
            _command.clear();
        for (unsigned int a = 1; a < k._message.size(); a++)
            _message.push_back(k._message[a]);
        for (unsigned int b = 1; b < k._command.size(); b++)
            _command.push_back(k._command.size());
    }
    return (*this);
}