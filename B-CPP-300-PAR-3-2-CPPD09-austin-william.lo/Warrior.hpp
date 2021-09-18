/*
** EPITECH PROJECT, 2021
** warrior.hpp
** File description:
** warrior.hpp
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Character.hpp"

class Warrior : public Character
{
protected:
    std::string weaponName;

public:
    Warrior(const std::string &name, int level);
    ~Warrior();
    std::string getWeapon();
    int CloseAttack();
    int RangeAttack();
};