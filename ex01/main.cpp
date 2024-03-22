/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <mugurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:59:24 by mugurel           #+#    #+#             */
/*   Updated: 2024/03/10 16:01:48 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies;
	int zombieCount = 30;
	zombies = zombieHorde(zombieCount, "zombicik");
	for(int i = 0; i < zombieCount; i++)
	{
		std::cout << TEXT_BLUE << i << " : ";
		zombies[i].announce();
	}
	delete[] zombies;
}
