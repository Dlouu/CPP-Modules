/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/02 11:21:17 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << BLU "WrongCat default constructor called" END << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << BLU "WrongCat destructor called" END << std::endl;
}

WrongCat::WrongCat( WrongCat const& other ) : WrongAnimal(other._type) {
	std::cout << BLU "WrongCat copy by construction called" END << std::endl;
}

WrongCat& WrongCat::operator=( WrongCat const& other ) {
	std::cout << BLU "WrongCat copy by assignement called" END << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << BLU << "Meow, les humains sont des sous-merdes ";
	std::cout << "donnez moi des caresses :3 *purrrr* 🧶​​" END << std::endl;
}
