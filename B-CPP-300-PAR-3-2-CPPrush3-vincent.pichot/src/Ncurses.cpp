/*
** EPITECH PROJECT, 2021
** B-CPP-300-PAR-3-2-CPPrush3-vincent.pichot
** File description:
** main
*/

#include "Ncurses.hpp"
#include "Monitor.hpp"

Ncurses::Ncurses()
{
    int c = getch();
    int count = 2;
    sf::RenderWindow window;

    initscr();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    noecho();

    while (c != 27 && count != 0) {
        clear();
        print_user();
        print_date_name();
        print_sys_name();
        print_ram();
        print_graph(&window, 1);
        refresh();
        c = getch();
    }
    endwin();
}