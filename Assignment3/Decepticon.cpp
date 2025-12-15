/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#include "Decepticon.hpp"

Decepticon::Decepticon(int level, int strength, int range, int fuel, int ammo,
                       Weapon* weapon, Ally* ally, std::string altMode, int terrorFactor):
    Transformer(level, strength, range, fuel, ammo, weapon, ally),
    _altMode(altMode), _terrorFactor(terrorFactor) {}
Decepticon::Decepticon() {}
Decepticon::~Decepticon() {}

std::string Decepticon::getAltMode()
{
    return _altMode;
}
int Decepticon::getTerrorFactor()
{
    return _terrorFactor;
}

void Decepticon::setAltMode(std::string mode)
{
    _altMode = mode;
}
void Decepticon::setTerrorFactor(int factor)
{
    _terrorFactor = factor;
}

bool Decepticon::intimidate()
{
    return true;
}
bool Decepticon::transform()
{
    return false;
}
