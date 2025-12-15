/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP

#include "Transformer.hpp"
#include <string>

class Autobot : public Transformer {
public:
    Autobot(int level, int strength, int range, int fuel, int ammo,
            Weapon *weapon, Ally* ally, std::string& vehicleMode, 
            std::string& motto);
    virtual ~Autobot();

    std::string getVehicleMode();
    std::string getMotto();

    void setVehicleMode(std::string& mode);
    void setMotto(std::string& motto);

    bool assist();
    bool transform();

protected:
    std::string _vehicleMode;
    std::string _motto;
};

#endif