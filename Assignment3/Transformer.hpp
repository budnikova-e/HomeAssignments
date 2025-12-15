/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Direction.hpp"
#include "Weapon.hpp" 
#include "Ally.hpp" 

class Transformer {
    public:
        Transformer(int level, int strength, int range, int fuel, int ammo, 
            Weapon* weapon, Ally* ally);
        virtual ~Transformer();


        int getLevel();
        int getStrength();
        int getRange();
        int getFuel();
        int getAmmo();

        Weapon* getWeapon();
        Ally* getAlly();

        void setLevel(int level);
        void setStrength(int strength);
        void setRange(int range);
        void setFuel(int fuel);
        void setAmmo(int ammo);

        void setWeapon(Weapon* newWeapon);
        void setAlly(Ally* newAlly);


        bool move();
        bool turn(Direction dir);
        bool jump();
        bool fire();
        bool ultimate();
        bool transform();

    protected:
        int _level;
        int _strength;
        int _range;
        int _fuel;
        int _ammo;
        Weapon* _weapon;
        Ally* _ally;
};

#endif
