/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:26:05 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/02/27 20:50:40 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("Unknown") {};

Zombie::~Zombie( void ) {
	std::cout << RED << _name << " destroyed" END << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << PUR << _name << ": BraiiiiiiinnnzzzZ..." END << std::endl;
}

void	Zombie::setName( std::string name ) {
	_name = name;
}
