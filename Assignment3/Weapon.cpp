/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#include "Weapon.hpp"

Weapon::Weapon(std::string name, int damage) : _name(name), _damage(damage) {}
Weapon::~Weapon() {}

std::string Weapon::getName()
{
    return _name;
}
int Weapon::getDamage()
{
    return _damage;
}

void Weapon::setName(std::string newName)
{
    _name = newName;
}
void Weapon::setDamage(int newDamage)
{
    _damage = newDamage;
}