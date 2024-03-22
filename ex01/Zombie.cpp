/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <mugurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:59:17 by mugurel           #+#    #+#             */
/*   Updated: 2024/03/10 14:59:27 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << TEXT_GREEN << this->name << TEXT_RESET <<": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void Zombie::setName( std::string name )
{
	this->name = name;
}

Zombie::~Zombie()
{
  std::cout << TEXT_RED << "Destroyed Zombie: " << TEXT_BLUE << this->name << TEXT_RESET << std::endl;
}
