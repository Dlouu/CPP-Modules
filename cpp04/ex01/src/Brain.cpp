/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/02 11:21:17 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain( void ) {
	std::cout << RED "Brain constructor called" END << std::endl;
	this->_ideas[0] = "empty";
}

Brain::~Brain( void ) {
	std::cout << RED "Brain destructor called" END << std::endl;
}

Brain::Brain( Brain const& other ) {
	std::cout << RED "Brain copy by construction called" END << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=( Brain const& other ) {
	std::cout << RED "Brain copy by assignement called" END << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

void	Brain::setIdea( int i, std::string idea ) {
	_ideas[i] = idea;
}

const std::string&	Brain::getIdea( int i ) const {
	return (_ideas[i]);
}
