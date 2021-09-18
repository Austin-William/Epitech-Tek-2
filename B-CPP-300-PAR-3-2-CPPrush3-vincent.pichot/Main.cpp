/*
** EPITECH PROJECT, 2021
** B-CPP-300-PAR-3-2-CPPrush3-vincent.pichot
** File description:
** main
*/

#include "IMonitorModule.hpp"
#include "Ncurses.hpp"
#include "IMonitorDisplay.hpp"

int main(int ac, char **av)
{
    std::string str;

    if (ac != 2) {
        std::cout << "Error: USE -h for HELP" << std::endl;
        return (84);
    }
    str = av[1];
    if (str.compare("-h") == 0) {
        std::cout << "HELP" << std::endl;
        std::cout << "      ./MyGKrellm [TYPE]" << std::endl;
        std::cout << "      TYPE: 'text' or 'graphical' mode" << std::endl;
        return (84);
    }
    if (str.compare("text") == 0) {
        Ncurses ncurses;
    } else if (str.compare("graphic") == 0) {
        Window window;
    } else {
        std::cout << "Error: Invalid Command" << std::endl;
        return (84);
    }

    return (0);
}