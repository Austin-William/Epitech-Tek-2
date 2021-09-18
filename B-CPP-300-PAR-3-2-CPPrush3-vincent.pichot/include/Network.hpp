/*
** EPITECH PROJECT, 2021
** network.hpp
** File description:
** network.hpp
*/

#ifndef NETWORK_HPP_
#define NETWORK_HPP_

#include "IMonitorModule.hpp"

class Network : public IMonitorModule
{
private:
    std::string name;
    std::string description;
    std::string id;
    int receiveByte;
    int receivePacket;
    int sendByte;
    int sendPacket;

public:
    Network();
    ~Network();
    virtual const std::string getName() const;
    virtual const std::string getDescr() const;
    const std::string getId() const;
    const int getRecByte() const;
    const int getRecPacket() const;
    const int getSendByte() const;
    const int getSendPacket() const;
    void takeInfo();
};

#endif