/*
** EPITECH PROJECT, 2021
** network.cpp
** fs description:
** network.cpp
*/

#include "Network.hpp"

Network::Network()
{
    this->name = "Network";
    this->description = "Check your traffic network";
}

Network::~Network()
{
}

const std::string Network::getName() const
{
    return (this->name);
}

const std::string Network::getDescr() const
{
    return (this->description);
}

const std::string Network::getId() const
{
    return (this->id);
}

const int Network::getRecByte() const
{
    return (this->receiveByte);
}

const int Network::getRecPacket() const
{
    return (this->receivePacket);
}

const int Network::getSendByte() const
{
    return (this->sendByte);
}

const int Network::getSendPacket() const
{
    return (this->sendPacket);
}

void Network::takeInfo()
{
    std::ifstream fs("/proc/net/dev", std::ifstream::in);
    std::string tmp;

    size_t nothing;

    if (fs.is_open())
    {
        for (int i = 0; i < 3; ++i)
            std::getline(fs, tmp);

        std::getline(fs, tmp);
        std::istringstream stream(tmp);
        stream >> this->id >> this->receiveByte >> this->receivePacket >> nothing >> nothing >> nothing >> nothing >> nothing >> nothing >> this->sendByte >> sendPacket;
    }
}