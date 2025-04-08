/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/05 12:16:01 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Animal.hpp"

Animal::Animal( void ) {
	std::cout << PUR "Animal default constructor called" END << std::endl;
	this->_type = "Animal";
}

Animal::Animal( std::string type )  : _type(type){
	std::cout << PUR "Animal constructor called" END << std::endl;
}
// ici on a bouge l'init de la variable par rapport au 00 avec Jean donc voir si c'est judicieux

Animal::~Animal( void ) {
	std::cout << PUR "Animal destructor called" END << std::endl;
}

Animal::Animal( Animal const& other ) : _type(other._type) {
	std::cout << PUR "Animal copy by construction called" END << std::endl;
}

Animal& Animal::operator=( Animal const& other ) {
	std::cout << PUR "Animal copy by assignement called" END << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	Animal::makeSound( void ) const {
	std::cout << PUR "Bonjour, je suis un animal, cordialement." END << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->_type);
}
