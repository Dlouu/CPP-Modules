/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:26:40 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/01 11:19:33 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	_name = "Trappie";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << MAG "Welcome to ScavTrap " << _name << "!" END << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << MAG "Byebye ScavTrap " << _name << "!" END << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << MAG "Welcome to ScavTrap " << _name << "!" END << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const& other ) : ClapTrap( other._name ) {
	std::cout << MAG "Welcome to ScavTrap " << _name << " who copied ";
	std::cout << other._name << " by construction." END << std::endl;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ScavTrap& ScavTrap::operator=( ScavTrap const& other ) {
	std::cout << MAG "Welcome to ScavTrap " << _name << " who copied ";
	std::cout << other._name << " by assignation." END << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack( const std::string& target ) {
	if (_hitPoints <= 0) {
		std::cout << MAG "ScavTrap " << _name << RED " is K.O. and cannot attack" END << std::endl;
		return ;
	}
	else if (_energyPoints <= 0) {
		std::cout << MAG "ScavTrap " << _name << BLU " has no energy left and cannot attack" END << std::endl;
		return ;
	}
	std::cout << MAG "ScavTrap " << _name << RED " attacks " << target << ", causing ";
	std::cout << _attackDamage << " points of damages !" END << std::endl;
	_energyPoints -= 1;
}

void	ScavTrap::guardGate( void ) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		if (_energyPoints <= 0)
			std::cout << MAG "ScavTrap " << _name << BLU " has no energy left and cannot use guard gate" END << std::endl;
		if (_hitPoints <= 0)
			std::cout << MAG "ScavTrap " << _name << RED " is K.O. and cannot use guard gate" END << std::endl;
		return ;
	}
	std::cout << MAG "ScavTrap " << _name << BLU " is now in Gatekeeper mode" END << std::endl;
	_energyPoints -= 1;
}
