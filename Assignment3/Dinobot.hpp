/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#ifndef DINOBOT_HPP
#define DINOBOT_HPP

#include "Autobot.hpp"
#include <string>

class Dinobot : public Autobot {
public:
    Dinobot(int level, int strength, int range, int fuel, int ammo,
        Weapon* weapon , Ally* ally, std::string& vehicleMode, std::string& motto,
        std::string& dinoType);
    ~Dinobot();

    std::string getDinoType();

    void setDinoType(std::string& type);

    bool stomp();
    bool transform();

private:
    std::string _dinoType;
};

#endif