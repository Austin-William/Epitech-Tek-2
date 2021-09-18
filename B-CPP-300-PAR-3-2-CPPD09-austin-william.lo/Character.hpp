/*
** EPITECH PROJECT, 2021
** character.hpp
** File description:
** character.hpp
*/

#include <iostream>
#include <iomanip>
#include <string>

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

class Character
{
protected:
    std::string _name;
    int _level;
    int _pv;
    int _energy;
    int _stamina;
    int _spirit;
    int _agility;
    int _strength;
    int _intelligence;
    std::string _class;
    std::string _race;

public:
    Character(const std::string &name, int level);
    ~Character();
    const std::string &getName() const;
    int getLvl() const;
    int getPv() const;
    int getPower() const;

    int CloseAttack();
    int RangeAttack();
    void Heal();
    void RestorePower();
    void TakeDamage(int damage);

    typedef enum range_s
    {
        RANGE,
        CLOSE
    } AttackRange;

    AttackRange Range;
};

#endif