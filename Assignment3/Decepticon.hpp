/* Ekaterina Budnikova  st107207@student.spbu.ru
Hello_world task */

#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP

#include "Transformer.hpp"

class Decepticon: public Transformer{
public:
    Decepticon(int level, int strength, int range, int fuel, int ammo,
               Weapon* weapon, Ally* ally, std::string altMode, int terrorFactor);
    Decepticon();
    ~Decepticon();

    std::string getAltMode();
    int getTerrorFactor();

    void setAltMode(std::string mode);
    void setTerrorFactor(int factor);

    bool intimidate();
    bool transform();

protected:
    std::string _altMode;
    int _terrorFactor;
};
#endif
