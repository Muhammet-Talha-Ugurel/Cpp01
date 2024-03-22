#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon){
    setName(name);
    setWeapon(weapon);
}

HumanA::~HumanA() {
    std::cout << "HumanA destroyed" << std::endl;
}

std::string HumanA::getName() {
    return this->name;
}

void HumanA::setName(std::string nameSet) {
    this->name = nameSet;
}

Weapon HumanA::getWeapon() {
    return this->weapon;
}

void HumanA::setWeapon(Weapon &weapon) {
    this->weapon = weapon;
}

void HumanA::attack() {
    std::cout << getName() << " attacks with " << getWeapon().getType() << std::endl;
}