/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:47:40 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 10:58:21 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed( void ) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& other ) : _rawBits(other._rawBits) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( Fixed const& other ) {
	if (this != &other) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->_rawBits = other.getRawBits();
	}
	return (*this);
}

void	Fixed::setRawBits( int const raw ) {
	_rawBits = raw;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}
