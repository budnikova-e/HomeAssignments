/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP

#include "Transformer.hpp"
#include <string>

class Autobot : public Transformer {
public:
    Autobot(int level, int strength, int range, int fuel, int ammo,
            Weapon *weapon, Ally* ally, std::string vehicleMode, 
            std::string team);
    Autobot();
    virtual ~Autobot();

    std::string getVehicleMode();
    std::string getTeam();

    void setVehicleMode(std::string mode);
    void setTeam(std::string team);

    bool assist();
    bool transform();

protected:
    std::string _vehicleMode;
    std::string _team;
};

#endif