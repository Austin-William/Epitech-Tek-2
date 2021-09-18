/*
** EPITECH PROJECT, 2021
** domestickoala.hpp
** File description:
** domestickoala.hpp
*/

#ifndef DOMESTICKOALA_HPP_
#define DOMESTICKOALA_HPP_

#include <iostream>
#include <string>
#include <vector>
#include "KoalaAction.hpp"

class DomesticKoala
{
public:
    DomesticKoala(KoalaAction &);
    ~DomesticKoala();
    DomesticKoala(const DomesticKoala &);
    DomesticKoala &operator=(const DomesticKoala &);
    typedef void (KoalaAction::*methodPointer_t)(const std::string &);
    const std::vector<methodPointer_t> *getActions() const;
    void learnAction(unsigned char command, methodPointer_t action);
    void unlearnAction(unsigned char command);
    void doAction(unsigned char command, const std ::string &param);
    void setKoalaAction(KoalaAction &);

private:
    std::vector<methodPointer_t> _message;
    std::vector<char> _command;
    KoalaAction &ka;
};

#endif