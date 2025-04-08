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

Dog::Dog( void ) : Animal("Dog"), _brain(new Brain) {
	std::cout << YEL "Dog default constructor called" END << std::endl;
}

Dog::~Dog( void ) {
	std::cout << YEL "Dog destructor called" END << std::endl;
	delete this->_brain;
}

Dog::Dog( Dog const& other ) : Animal(other._type) {
	std::cout << YEL "Dog copy by construction called" END << std::endl;
	this->_brain = other._brain;
}

Dog& Dog::operator=( Dog const& other ) {
	std::cout << YEL "Dog copy by assignement called" END << std::endl;
	if (this != &other) {
		this->_type = other._type;
		*this->_brain = *other._brain;
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << YEL "Wuf, CROQUETTES ? CROQUETTES ? 🦴 ";
	std::cout << "T'as des CROQUETTES ? *bave*​" END << std::endl;
}

void	Dog::setBrainIdeas( std::string idea ) {
	for (int i = 0; i < 100; i++) {
		_brain->setIdea(i, idea);
	}
}

void	Dog::setBrainIdea( int i, std::string idea ) {
	if (i >= 0 && i < 100) {
		_brain->setIdea(i, idea);
	}
}

void	Dog::printIdeas( void ) const {
	std::cout << "Ideas = ";
	for (int i = 0; i < 100; i++) {
		std::cout << i << ":" << _brain->getIdea(i);
		std::cout << " ";
	}
	std::cout << std::endl;
}
