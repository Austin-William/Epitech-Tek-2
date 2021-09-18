/*
** EPITECH PROJECT, 2021
** Window.cpp
** File description:
** Window.cpp
*/

#include "IMonitorDisplay.hpp"
#include "IMonitorModule.hpp"
#include "Monitor.hpp"
#include "System.hpp"
#include "User.hpp"
#include "Cpu.hpp"
#include "Date.hpp"
#include "Ram.hpp"
#include "Network.hpp"

void print_info(sf::RenderWindow *window, std::string _text, int x, int y)
{
    sf::Font font;
    font.loadFromFile("font/arial.ttf");
    sf::Text text;
    text.setFont(font);
    text.setString(_text);
    text.setCharacterSize(20);
    text.setFillColor(sf::Color::White);
    text.setPosition(sf::Vector2f(x, y));
    window->draw(text);
}

Window::Window()
{
    sf::RenderWindow window(sf::VideoMode(1600, 900), "CPU-Z Wish version");
    sf::Event event;
    sf::Texture texture;
    sf::Sprite sprite;
    User u;
    Cpu c;
    Date d;
    Ram r;
    System s;
    Network n;

    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        texture.loadFromFile("sprite/background.png");
        sprite.setTexture(texture);
        window.draw(sprite);
        // User
        print_info(&window, u.getThisName(), 40, 90);
        print_info(&window, u.getDescription(), 40, 50);
        print_info(&window, "   :", 70, 90);
        print_info(&window, u.getUserName(), 100, 90);
        print_info(&window, "Domain :", 40, 130);
        print_info(&window, u.getComputerName(), 130, 130);
        // CPU
        print_info(&window, c.getName(), 900, 110);
        print_info(&window, c.getDescription(), 900, 50);
        print_info(&window, c.getFrequency(), 1000, 150);
        print_info(&window, "Mhz", 1125, 150);
        print_info(&window, c.getModelCpu(), 1000, 110);
        print_info(&window, convertIntToStr(c.getNbICores()), 1000, 180);
        print_info(&window, "ICores", 1020, 180);
        print_info(&window, convertIntToStr(c.getNbCpu()), 1100, 180);
        print_info(&window, "threads", 1120, 180);
        print_info(&window, c.getCacheSize(), 1000, 210);
        print_info(&window, c.getAdress(), 1000, 240);
        // Date
        print_info(&window, d.getDateName(), 40, 200);
        print_info(&window, d.getDate(), 40, 240);
        print_info(&window, d.getTime(), 160, 240);
        //CPU Usage
        print_info(&window, "CPU Usage", 40, 290);
        print_graph(&window, 0);
        // Ram
        print_info(&window, r.getDescr(), 900, 300);
        print_info(&window, r.getName(), 900, 340);
        print_info(&window, "Total Ram :", 1000, 340);
        print_info(&window, r.getTotal(), 1150, 340);
        print_info(&window, "Available Ram :", 1000, 380);
        print_info(&window, r.getAvailable(), 1150, 380);
        print_info(&window, "Usage Ram :                     kB", 1000, 420);
        print_info(&window, r.getUsage(), 1150, 420);
        // System
        print_info(&window, s.getDescription(), 600, 500);
        print_info(&window, s.getSystemName(), 700, 550);
        print_info(&window, "Kernel :", 630, 600);
        print_info(&window, s.getIsLinux(), 720, 600);
        print_info(&window, s.getVersionKernel(), 790, 600);
        print_info(&window, "OS :", 660, 650);
        print_info(&window, s.getVersionOs(), 720, 650);
        // Network
        print_info(&window, n.getDescr(), 40, 500);
        print_info(&window, n.getName(), 40, 530);
        print_info(&window, n.getId(), 40, 560);
        print_info(&window, "Bytes receive :", 40, 590);
        print_info(&window, convertIntToStr(n.getRecByte()), 200, 590);
        print_info(&window, "Packets receive :", 40, 620);
        print_info(&window, convertIntToStr(n.getRecPacket()), 200, 620);
        print_info(&window, "Bytes send :", 40, 650);
        print_info(&window, convertIntToStr(n.getSendByte()), 200, 650);
        print_info(&window, "Packets send :", 40, 680);
        print_info(&window, convertIntToStr(n.getSendPacket()), 200, 680);
        window.display();
    }
    window.close();
}
