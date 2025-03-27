/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:47:40 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 10:58:48 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed( void ) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const number ) : _rawBits(number) {
	std::cout << "Int constructor called" << std::endl;
	_rawBits = number << _bits;
}

Fixed::Fixed( float const floated ) : _rawBits(floated) {
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(floated * (1 << _bits));
}

Fixed::Fixed( Fixed const& other ) : _rawBits(other._rawBits) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( Fixed const& other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_rawBits = other.getRawBits();
	}
	return (*this);
}

void	Fixed::setRawBits( int const raw ) {
	_rawBits = raw;
}

int		Fixed::getRawBits( void ) const {
	return (_rawBits);
}

float	Fixed::toFloat( void ) const {
	return ((float)_rawBits / (1 << _bits));
}

int		Fixed::toInt( void ) const {
	return (_rawBits >> _bits); 
}

std::ostream& operator<<( std::ostream& outstream, Fixed const& other ) {
	outstream << other.toFloat();
	return (outstream);
}
