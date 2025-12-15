/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#include "Dinobot.hpp"

Dinobot::Dinobot(int level, int strength, int range, int fuel, int ammo,
        Weapon* weapon , Ally* ally, std::string vehicleMode, std::string team,
        std::string dinoType): Autobot(level, strength, range, fuel, ammo, weapon, ally, vehicleMode, team),
      _dinoType(dinoType) {
}
Dinobot::Dinobot(){}
Dinobot::~Dinobot(){}

std::string Dinobot::getDinoType(){ return _dinoType; }

void Dinobot::setDinoType(std::string type) { _dinoType = type; }

bool Dinobot::stomp() {
        return true;
}

bool Dinobot::transform() { 
        return false; 
}