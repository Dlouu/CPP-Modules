/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:01:47 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/21 09:37:20 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	std::cout << _name << PINK " is born." END << std::endl;
	_weapon = NULL;	
}

HumanB::~HumanB( void ) {
	std::cout << _name << RED " is dead, sadge." END << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) {
	if (_weapon) {
		std::cout << _name << PURPLE " attacks with their ";
		std::cout << _weapon->getType() << END << std::endl;
	}
	else
		std::cout << _name << " sit alone in the darkness." << std::endl;
}