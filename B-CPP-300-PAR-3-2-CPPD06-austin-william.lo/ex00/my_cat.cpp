/*
** EPITECH PROJECT, 2021
** my_cat.cpp
** File description:
** my_cat.cpp
*/

#include <iostream>
#include <string>
#include <fstream>

void my_cat(char **av)
{
    int a = 0;

    while (av[++a]) {
        std::ifstream fs(av[a]);
        if (!fs.is_open()) {
            fs.clear();
            std::cerr << "my_cat: " << av[a]
                << ": No such file or directory"<< std::endl;
        }
        std::cout << fs.rdbuf();
    }
}

int main(int ac, char **av)
{
    std::string no_file_str("my_cat: Usage: ./my_cat file [...]");

    if (ac == 1)
        std::cerr << no_file_str << std::endl;
    if (ac >= 2)
        my_cat(av);
}