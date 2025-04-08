/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/02 11:21:17 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat"), _brain(new Brain) {
	std::cout << MAG "Cat default constructor called" END << std::endl;
}

Cat::~Cat( void ) {
	std::cout << MAG "Cat destructor called" END << std::endl;
	delete this->_brain;
}

Cat::Cat( Cat const& other ) : AAnimal(other._type) {
	std::cout << MAG "Cat copy by construction called" END << std::endl;
	this->_brain = other._brain;
}

Cat& Cat::operator=( Cat const& other ) {
	std::cout << MAG "Cat copy by assignement called" END << std::endl;
	if (this != &other) {
		this->_type = other._type;
		*this->_brain = *other._brain;
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << MAG << "Meow, les humains sont des sous-merdes ";
	std::cout << "donnez moi des caresses :3 *purrrr* 🧶​​" END << std::endl;
}

void	Cat::setBrainIdeas( std::string idea ) {
	for (int i = 0; i < 100; i++) {
		_brain->setIdea(i, idea);
	}
}

void	Cat::setBrainIdea( int i, std::string idea ) {
	if (i >= 0 && i < 100) {
		_brain->setIdea(i, idea);
	}
}

void	Cat::printIdeas( void ) const {
	std::cout << "Ideas = ";
	for (int i = 0; i < 100; i++) {
		std::cout << i << ":" << _brain->getIdea(i);
		std::cout << " ";
	}
	std::cout << std::endl;
}
