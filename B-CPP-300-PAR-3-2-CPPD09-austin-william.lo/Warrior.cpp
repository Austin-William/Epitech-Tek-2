/*
** EPITECH PROJECT, 2021
** warrior.cpp
** File description:
** warrior.cpp
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level) : Character::Character(name, level)
{
    this->_name = name;
    this->_level = level;
    this->_pv = 100;
    this->_class = "Warrior";
    this->_race = "Dwarf";
    this->_strength = 12;
    this->_stamina = 12;
    this->_intelligence = 6;
    this->_spirit = 5;
    this->_agility = 7;
    this->weaponName = "hammer";
    Range = CLOSE;

    std::cout << "I'm " << this->_name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

std::string Warrior::getWeapon()
{
    return (this->weaponName);
}

int Warrior::CloseAttack()
{
    if (this->_energy >= 30 && Range == CLOSE) {
        this->_energy -= 30;
        this->_pv -= this->_strength + 20;
        std::cout << getName() << " strikes with a " << getWeapon() << std::endl;
    } else
        std::cout << getName() << " out of power" << std::endl;
    return (getPv());
}

int Warrior::RangeAttack()
{
    if (Range == RANGE && this->_energy >= 10) {
        this->_energy -= 10;
        this->_pv -= 5 + this->_strength;
        std::cout << getName() << " intercepts" <<std::endl;
        Range = CLOSE;
    } else
        std::cout << getName() << " out of power" << std::endl;
    return (getPv());
}

int main(void)
{
    Warrior w("Thor", 42);

    std::cout << w.getName() << std::endl;
    std::cout << w.getPower() << std::endl;
    std::cout << w.getLvl() << std::endl;
    std::cout << w.RangeAttack() << std::endl;
    w.TakeDamage(90);
    std::cout << w.getPv() << std::endl;
    return (0);
}