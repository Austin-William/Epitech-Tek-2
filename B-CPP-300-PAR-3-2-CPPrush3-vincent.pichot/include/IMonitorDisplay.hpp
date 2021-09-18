/*
** EPITECH PROJECT, 2021
** Window.hpp
** File description:
** include SFML
*/

#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "IMonitorModule.hpp"

class Window : public IMonitorModule
{
public:
    Window();
    ~Window() = default;
};

void print_info(sf::RenderWindow *window, std::string _text, int x, int y);

#endif