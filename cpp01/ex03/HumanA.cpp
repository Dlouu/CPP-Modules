/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:01:23 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/21 09:37:54 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon )
				: _name(name), _weapon(weapon) {
	std::cout << _name << PINK " says hello !" END << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << _name << RED " dies." END << std::endl;
}

void	HumanA::attack( void ) {
	std::cout << _name << PURPLE " attacks with their ";
	std::cout << _weapon.getType() << END << std::endl;
}
