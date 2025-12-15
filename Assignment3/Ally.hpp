/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#ifndef ALLY_HPP
#define ALLY_HPP

#include <string>

class Ally {
public:
    Ally(std::string name, std::string type);
    ~Ally();

    std::string getName();
    std::string getType();

    void setName(std::string newName);
    void setType(std::string newType);

private:
    std::string _name;
    std::string _type;
};

#endif