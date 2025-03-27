/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:47:40 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 10:59:17 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed( void ) : _rawBits(0) {}

Fixed::Fixed( int const number ) : _rawBits(number) {
	_rawBits = number << _bits;
}

// revient a multiplier par 256 (ou par 2 puissance 8)
// roundf = pour calculer l'arrondi le plus proche
Fixed::Fixed( float const floated ) : _rawBits(floated) {
	_rawBits = roundf(floated * (1 << _bits));
}

Fixed::Fixed( Fixed const& other ) : _rawBits(other._rawBits) {
	*this = other;
}

Fixed::~Fixed( void ) {}

Fixed& Fixed::operator=( Fixed const& other ) {
	if (this != &other) {
		this->_rawBits = other.getRawBits();
	}
	return (*this);
}

// opérateurs de comparaison (>, <, >=, <=, ==, !=)

bool Fixed::operator>( Fixed const& other ) const {
	return (this->_rawBits > other.getRawBits());
}

bool Fixed::operator<( Fixed const& other ) const {
	return (this->_rawBits < other.getRawBits());
}

bool Fixed::operator>=( Fixed const& other ) {
	return (this->_rawBits >= other.getRawBits());
}

bool Fixed::operator<=( Fixed const& other ) {
	return (this->_rawBits <= other.getRawBits());
}

bool Fixed::operator==( Fixed const& other ) {
	return (this->_rawBits == other.getRawBits());
}

bool Fixed::operator!=( Fixed const& other ) {
	return (this->_rawBits != other.getRawBits());
}

// opérateurs arithmétiques (+, -, * et /)

Fixed Fixed::operator+( Fixed const& other ) {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-( Fixed const& other ) {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*( Fixed const& other ) {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/( Fixed const& other ) {
	return (Fixed(this->toFloat() / other.toFloat()));
}

// opérateurs d’incrémentation et de décrémentation

Fixed&	Fixed::operator++() {		// ++i
	_rawBits++;
	return (*this);
}

Fixed&	Fixed::operator--() {		// --i
	_rawBits--;
	return (*this);
}

Fixed	Fixed::operator++( int ) {	// i++
	Fixed	old = *this;
	operator++();
	return (old);
}

Fixed	Fixed::operator--( int ) {	// i--
	Fixed	old = *this;
	operator--();
	return (old);
}

/* Une fonction membre statique min prenant en paramètres deux références sur des
nombres à virgule fixe constants et qui retourne le plus petit d’entre eux. */
const Fixed& Fixed::min( Fixed const& lhs, Fixed const& rhs ) {
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

/* Une fonction membre statique max prenant en paramètres deux références sur des
nombres à virgule fixe constants et qui retourne le plus grand d’entre eux. */
const Fixed& Fixed::max( Fixed const& lhs, Fixed const& rhs ) {
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

/* Une fonction membre statique min prenant en paramètres deux références sur des
nombres à virgule fixe et qui retourne le plus petit d’entre eux. */
Fixed& Fixed::min( Fixed& lhs, Fixed& rhs ) {
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

/* Une fonction membre statique max prenant en paramètres deux références sur des
nombres à virgule fixe et qui retourne le plus grand d’entre eux. */
Fixed& Fixed::max( Fixed& lhs, Fixed& rhs ) {
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

void	Fixed::setRawBits( int const raw ) {
	_rawBits = raw;
}

int		Fixed::getRawBits( void ) const {
	return (_rawBits);
}

// revient a diviser par 256 (ou 2 puissance 8)
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
