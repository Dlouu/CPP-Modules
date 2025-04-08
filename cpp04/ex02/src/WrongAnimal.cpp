/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/03 11:38:23 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << BLU "WrongAnimal default constructor called" END << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( std::string type ) {
	std::cout << BLU "WrongAnimal constructor called" END << std::endl;
	this->_type = type;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << BLU "WrongAnimal destructor called" END << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const& other ) : _type(other._type) {
	std::cout << BLU "WrongAnimal copy by construction called" END << std::endl;
}

WrongAnimal& WrongAnimal::operator=( WrongAnimal const& other ) {
	std::cout << BLU "WrongAnimal copy by assignement called" END << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << BLU "Bonjour, je suis un WrongAnimal, cordialement." END << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->_type);
}
