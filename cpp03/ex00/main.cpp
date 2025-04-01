/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:26:42 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/01 09:28:54 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap	trap;
	ClapTrap	clubyTrap("Cluby");
	ClapTrap	ahansTrap("Ahans");
	ClapTrap	otherTrap(trap);
	ClapTrap	copiedTrap;
	copiedTrap = trap;

	std::cout << std::endl;
	ahansTrap.attack("itself");
	ahansTrap.beRepaired(100);
	for (int i = 0; i < 8; ++i) {
		ahansTrap.attack("Cluby");
		clubyTrap.takeDamage(0);
		clubyTrap.beRepaired(42);
	}
	ahansTrap.attack("Cluby");
	ahansTrap.beRepaired(100);
	clubyTrap.attack("Ahans");
	clubyTrap.attack("Ahans");
	clubyTrap.attack("Ahans");
	ahansTrap.takeDamage(1);
	ahansTrap.takeDamage(10);
	ahansTrap.takeDamage(100);
	ahansTrap.takeDamage(1000);
	ahansTrap.attack("Test");
	std::cout << std::endl;
	return (0);
}
