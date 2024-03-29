#include "Harl.hpp"

void Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
	std ::cout <<" I love having extra bacon for my 7XL-double-cheese"
				 "-triple-pickle-specialketchup burger. I really do!"
				 << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
			 "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			 << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free."<<std::endl 
            << " I’ve been coming for years whereas you started working here since last month."
            <<std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    complains comp[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string selectLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int i=0;

    while(i<4 && level != selectLevel[i])
        i++;
    switch(i)
	{
		case(0):
			(this->*comp[0])();
			break;
		case(1):
			(this->*comp[1])();
			break;
		case(2):
			(this->*comp[2])();
			break;
		case(3):
			(this->*comp[3])();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}