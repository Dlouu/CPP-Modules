/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:26:42 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/31 15:15:21 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	ClapTrap	clubyTrap("Cluby");
	ScavTrap	ahansTrap("Ahans");

	std::cout << std::endl;
	ahansTrap.attack("itself");
	ahansTrap.takeDamage(20);
	ahansTrap.beRepaired(100);
	ahansTrap.guardGate();
	for (int i = 0; i < 8; ++i) {
		clubyTrap.beRepaired(42);
		ahansTrap.attack("Cluby");
		clubyTrap.takeDamage(20);
	}
	ahansTrap.attack("Cluby");
	ahansTrap.beRepaired(100);
	clubyTrap.attack("Ahans");
	ahansTrap.guardGate();
	clubyTrap.attack("Ahans");
	ahansTrap.takeDamage(1000);
	ahansTrap.attack("Test");
	std::cout << std::endl;
	return (0);
}
