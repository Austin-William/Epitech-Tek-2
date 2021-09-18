/*
** EPITECH PROJECT, 2021
** federation.hpp
** File description:
** federation.hpp
*/

#include <string>
#include <iomanip>
#include <iostream>
#include "WarpSystem.hpp"

#ifndef FEDERATION_HPP_
#define FEDERATION_HPP_

namespace Federation
{
    namespace Starfleet
    {
        class Ship
        {
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::ICore *_ICore;

        public:
            Ship(int length, int width, std::string name, short maxWarp);
            ~Ship();
            void setupICore(WarpSystem::ICore *ICoreReactor);
            void checkICore();
        };
    }
    class Ship
    {
        int _length;
        int _width;
        std::string _name;
        short _maxWarp = 1;
        WarpSystem::ICore *_ICore;

    public:
        Ship(int length, int width, std::string name);
        ~Ship();
        void setupICore(WarpSystem::ICore *ICoreReactor);
        void checkICore();
    };
}

#endif