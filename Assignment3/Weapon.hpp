/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:
    Weapon(std::string name, int damage);
    ~Weapon();

    std::string getName();
    int getDamage();

    void setName(std::string newName);
    void setDamage(int newDamage);

private:
    std::string _name;
    int _damage;
};

#endif 