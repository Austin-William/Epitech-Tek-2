/*
** EPITECH PROJECT, 2021
** character.cpp
** File description:
** character.cpp
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level)
{
    this->_name = name;
    this->_level = level;
    this->_pv = 100;
    this->_energy = 100;
    this->_strength = 5;
    this->_agility = 5;
    this->_spirit = 5;
    this->_stamina = 5;
    this->_intelligence = 5;
    this->_class = "Character";
    this->_race = "Human";
    Range = CLOSE;

    std::cout << this->_name << " Created" << std::endl;
}

Character::~Character()
{
}

const std::string &Character::getName() const
{
    return (this->_name);
}

int Character::getLvl() const
{
    return (this->_level);
}

int Character::getPv() const
{
    return (this->_pv);
}

int Character::getPower() const
{
    return (this->_energy);
}

int Character::CloseAttack()
{
    int attack = 0;

    if (this->_energy >= 10 &&  Range == CLOSE) {
        this->_energy -= 10;
        attack = this->_strength + 10;
        std::cout << getName() << " strikes with a wooden stick" << std::endl;
    } else
        std::cout << getName() << " out of power" << std::endl;
    return (attack);
}

void Character::Heal()
{
    this->_pv += 50;
    std::cout << getName() << " takes a potion" << std::endl;
}

int Character::RangeAttack()
{
    int attack = 0;

    if (Range == RANGE || RANGE == CLOSE && this->_energy >= 10) {
        this->_energy -= 10;
        attack = 5 + this->_strength;
        std::cout << getName() << " tosses a stone" <<std::endl;
    } else
        std::cout << getName() << " out of power" << std::endl;
    return (attack);
}

void Character::RestorePower()
{
    this->_energy += 100;
    std::cout << getName() << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    this->_pv -= damage;
    if (this->_pv <= 0)
        std::cout << getName() << " out of combat" << std::endl;
    else
        std::cout << getName() << " takes " << damage << " damage" << std::endl;
}