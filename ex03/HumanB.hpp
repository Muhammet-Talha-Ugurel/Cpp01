#pragma once
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        Weapon *getWeapon();
        void setWeapon(Weapon &weapon);
        void setName(std::string name);
        std::string getName();
};