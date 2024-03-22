#pragma once
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        std::string getName();
        void setName(std::string nameSet);
        Weapon getWeapon();
        void setWeapon(Weapon &weapon);
        void attack();
};