#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    setType(type);
}

Weapon::~Weapon() {
    std::cout << "Weapon destroyed" << std::endl;
}

const std::string& Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string typeSet) {
    this->type = typeSet;
} 