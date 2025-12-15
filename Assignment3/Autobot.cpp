/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#include "Autobot.hpp"

Autobot::Autobot(int level, int strength, int range, int fuel, int ammo,
                 Weapon* weapon, Ally* ally, std::string vehicleMode,
                 std::string team): Transformer(level, strength, range, fuel, ammo, weapon, ally),
    _vehicleMode(vehicleMode), _team(team) {}
Autobot::Autobot() {}
Autobot::~Autobot() {}

std::string Autobot::getVehicleMode()
{
    return _vehicleMode;
}
std::string Autobot::getTeam()
{
    return _team;
}

void Autobot::setVehicleMode(std::string mode)
{
    _vehicleMode = mode;
}
void Autobot::setTeam(std::string motto)
{
    _team = motto;
}

bool Autobot::assist()
{
    return true;
}
bool Autobot::transform()
{
    return false;
}