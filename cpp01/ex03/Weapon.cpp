/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:02:22 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/02/21 15:23:23 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::Weapon( std::string type ) : _type(type) {}

Weapon::~Weapon( void ) {}

void	Weapon::setType( std::string type ) {
	this->_type = type;
	return ;
}

const std::string&	Weapon::getType( void ) const {
	return (this->_type);
}
