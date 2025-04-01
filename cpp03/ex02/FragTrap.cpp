/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:26:40 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/01 11:19:23 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	_name = "Trappie";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << YEL "Welcome to FragTrap " << _name << "!" END << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << YEL "Byebye FragTrap " << _name << "!" END << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << YEL "Welcome to FragTrap " << _name << "!" END << std::endl;
}

FragTrap::FragTrap( FragTrap const& other ) : ClapTrap( other._name ) {
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << YEL "Welcome to FragTrap " << _name << " who copied ";
	std::cout << other._name << " by construction." END << std::endl;
}

FragTrap& FragTrap::operator=( FragTrap const& other ) {
	std::cout << YEL "Welcome to FragTrap " << _name << " who copied ";
	std::cout << other._name << " by assignation." END << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void	FragTrap::attack( const std::string& target ) {
	if (_hitPoints <= 0) {
		std::cout << YEL "FragTrap " << _name << RED " is K.O. and cannot attack" END << std::endl;
		return ;
	}
	else if (_energyPoints <= 0) {
		std::cout << YEL "FragTrap " << _name << BLU " has no energy left and cannot attack" END << std::endl;
		return ;
	}
	std::cout << YEL "FragTrap " << _name << RED " attacks " << target << ", causing ";
	std::cout << _attackDamage << " points of damages !" END << std::endl;
	_energyPoints -= 1;
}

void	FragTrap::highFivesguys( void ) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		if (_energyPoints <= 0)
			std::cout << YEL "FragTrap " << _name << BLU " has no energy left and cannot high fives" END << std::endl;
		if (_hitPoints <= 0)
			std::cout << YEL "FragTrap " << _name << RED " is K.O. and cannot high fives" END << std::endl;
		return ;
	}
	std::cout << YEL "FragTrap " << _name << BLU " makes a high fives" END << std::endl;
	_energyPoints -= 1;
}
