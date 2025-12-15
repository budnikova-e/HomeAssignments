/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#include "Transformer.hpp"

Transformer::Transformer(int level, int strength, int range, int fuel, int ammo,
                         Weapon* weapon, Ally* ally): _level(level), _strength(strength), _range(range), _fuel(fuel), _ammo(ammo),
    _weapon(weapon), _ally(ally) {}
Transformer::~Transformer() {}
Transformer::Transformer() {}

int Transformer::getLevel()
{
    return _level;
}
int Transformer::getStrength()
{
    return _strength;
}
int Transformer::getRange()
{
    return _range;
}
int Transformer::getFuel()
{
    return _fuel;
}
int Transformer::getAmmo()
{
    return _ammo;
}

Weapon* Transformer::getWeapon()
{
    return _weapon;
}
Ally* Transformer::getAlly()
{
    return _ally;
}

void Transformer::setLevel(int level)
{
    _level = level;
}
void Transformer::setStrength(int strength)
{
    _strength = strength;
}
void Transformer::setRange(int range)
{
    _range = range;
}
void Transformer::setFuel(int fuel)
{
    _fuel = fuel;
}
void Transformer::setAmmo(int ammo)
{
    _ammo = ammo;
}

void Transformer::setWeapon(Weapon* newWeapon)
{
    _weapon = newWeapon;
}
void Transformer::setAlly(Ally*  newAlly)
{
    _ally = newAlly;
}

bool Transformer::move()
{
    return true;
}
bool Transformer::jump()
{
    return true;
}
bool Transformer::turn(Direction dir)
{
    return true;
}
bool Transformer::fire()
{
    return true;
}
bool Transformer::ultimate()
{
    return true;
}
bool Transformer::transform()
{
    return true;
}
