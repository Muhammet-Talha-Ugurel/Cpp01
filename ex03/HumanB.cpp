#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    setName(name);
}

HumanB::~HumanB() {
    std::cout << "HumanB destroyed" << std::endl;
}

void HumanB::attack() {
    std::cout << getName() << " attacks with " << getWeapon()->getType() << std::endl;
}

Weapon *HumanB::getWeapon() {
    return this->weapon;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::setName(std::string name) {
    this->name = name;
}

std::string HumanB::getName() {
    return this->name;
}