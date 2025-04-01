/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:26:42 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/01 09:28:10 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	ScavTrap	clubyTrap("Cluby");
	FragTrap	ahansTrap("Ahans");

	std::cout << std::endl;
	ahansTrap.highFivesguys();
	clubyTrap.attack("Ahans");
	ahansTrap.takeDamage(20);
	clubyTrap.guardGate();
	ahansTrap.attack("Cluby");
	clubyTrap.takeDamage(30);
	ahansTrap.attack("Cluby");
	clubyTrap.takeDamage(30);
	ahansTrap.attack("Cluby");
	clubyTrap.takeDamage(30);
	clubyTrap.beRepaired(20);
	ahansTrap.attack("Cluby");
	clubyTrap.takeDamage(30);
	clubyTrap.beRepaired(20);
	ahansTrap.attack("Cluby");
	clubyTrap.guardGate();
	ahansTrap.highFivesguys();
	std::cout << std::endl;
	return (0);
}
