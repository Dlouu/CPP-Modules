/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:30:42 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/09/23 10:50:48 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Serializer.hpp"
# include "../includes/Colors.hpp"

Serializer::Serializer( void ) {
	std::cout << PUR "Constructor called" END << std::endl;
}

Serializer::~Serializer( void ) {
	std::cout << PUR "Destructor called" END << std::endl;
}

Serializer::Serializer( Serializer const& other ) {
	*this = other;
	std::cout << PUR "Serializer copy by construction called" END << std::endl;
}

Serializer& Serializer::operator=( Serializer const& other ) {
	if (this == &other)
		return (*this);
	std::cout << PUR "Serializer copy by assignement called" END << std::endl;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
