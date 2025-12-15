/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment 3 */

#include "Ally.hpp"

Ally::Ally(std::string& name, std::string& type): _name(name), _type(type) {}
Ally::~Ally(){}

std::string Ally::getName() { return _name; }
std::string Ally::getType() { return _type; }

void Ally::setName(std::string& newName) { _name = newName; }
void Ally::setType(std::string& newType) { _type = newType; }