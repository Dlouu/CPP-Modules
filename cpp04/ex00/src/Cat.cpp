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

Cat::Cat( void ) : Animal("Cat") {
	std::cout << MAG "Cat default constructor called" END << std::endl;
}

Cat::~Cat( void ) {
	std::cout << MAG "Cat destructor called" END << std::endl;
}

Cat::Cat( Cat const& other ) : Animal(other._type) {
	std::cout << MAG "Cat copy by construction called" END << std::endl;
}

Cat& Cat::operator=( Cat const& other ) {
	std::cout << MAG "Cat copy by assignement called" END << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << MAG << "Meow, les humains sont des sous-merdes ";
	std::cout << "donnez moi des caresses :3 *purrrr* 🧶​​" END << std::endl;
}
