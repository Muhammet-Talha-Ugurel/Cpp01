/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <mugurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:59:14 by mugurel           #+#    #+#             */
/*   Updated: 2024/03/10 16:01:43 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define TEXT_RED			"\x1b[31m"
#define TEXT_GREEN		"\x1b[32m"
#define TEXT_YELLOW	"\x1b[33m"
#define TEXT_BLUE		"\x1b[34m"
#define TEXT_MAGENTA	"\x1b[35m"
#define TEXT_CYAN		"\x1b[36m"

#define TEXT_L_RED			"\x1b[91m"
#define TEXT_L_GREEN		"\x1b[92m"
#define TEXT_L_YELLOW	"\x1b[93m"
#define TEXT_L_BLUE		"\x1b[94m"
#define TEXT_L_MAGENTA	"\x1b[95m"
#define TEXT_L_CYAN		"\x1b[96m"

#define TEXT_RESET		"\x1b[0m"

class Zombie
{
    private:
        std::string name;
    public:
        ~Zombie();
        void announce(void);
        void setName(std::string name);

};

Zombie* zombieHorde( int N, std::string name );