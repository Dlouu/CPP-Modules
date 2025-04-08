/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/05 12:16:01 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/AAnimal.hpp"

AAnimal::AAnimal( void ) {
	std::cout << PUR "AAnimal default constructor called" END << std::endl;
	this->_type = "AAnimal";
}

AAnimal::AAnimal( std::string type )  : _type(type){
	std::cout << PUR "AAnimal constructor called" END << std::endl;
}
// ici on a bouge l'init de la variable par rapport au 00 avec Jean donc voir si c'est judicieux

AAnimal::~AAnimal( void ) {
	std::cout << PUR "AAnimal destructor called" END << std::endl;
}

AAnimal::AAnimal( AAnimal const& other ) : _type(other._type) {
	std::cout << PUR "AAnimal copy by construction called" END << std::endl;
}

AAnimal& AAnimal::operator=( AAnimal const& other ) {
	std::cout << PUR "AAnimal copy by assignement called" END << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	AAnimal::makeSound( void ) const {
	std::cout << PUR "Bonjour, je suis un AAnimal, cordialement." END << std::endl;
}

std::string	AAnimal::getType( void ) const {
	return (this->_type);
}
