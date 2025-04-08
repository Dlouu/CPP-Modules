/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/02 11:21:17 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << YEL "Dog default constructor called" END << std::endl;
}

Dog::~Dog( void ) {
	std::cout << YEL "Dog destructor called" END << std::endl;
}

Dog::Dog( Dog const& other ) : Animal(other._type) {
	std::cout << YEL "Dog copy by construction called" END << std::endl;
}

Dog& Dog::operator=( Dog const& other ) {
	std::cout << YEL "Dog copy by assignement called" END << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << YEL "Wuf, CROQUETTES ? CROQUETTES ? 🦴 ";
	std::cout << "T'as des CROQUETTES ? *bave*​" END << std::endl;
}
