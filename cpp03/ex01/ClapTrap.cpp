/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:26:40 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/01 11:18:45 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	_name = "Trappie";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << PUR "Welcome to ClapTrap " << _name << "!" END << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << PUR "Byebye ClapTrap " << _name << "!" END << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name) {
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << PUR "Welcome to ClapTrap " << _name << "!" END << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const& other ) :	_name(other._name), 
												_hitPoints(other._hitPoints),
												_energyPoints(other._energyPoints),
												_attackDamage(other._attackDamage) {
	std::cout << PUR "Welcome to ClapTrap " << _name << " who copied ";
	std::cout << other._name << " by construction." END << std::endl;
}

ClapTrap& ClapTrap::operator=( ClapTrap const& other ) {
	std::cout << PUR "Welcome to ClapTrap " << _name << " who copied ";
	std::cout << other._name << " by assignation." END << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string& target ) {
	if (_hitPoints <= 0) {
		std::cout << PUR "ClapTrap " << _name << RED " is K.O. and cannot attack" END << std::endl;
		return ;
	}
	else if (_energyPoints <= 0) {
		std::cout << PUR "ClapTrap " << _name << BLU " has no energy left and cannot attack" END << std::endl;
		return ;
	}
	std::cout << PUR "ClapTrap " << _name << RED " attacks " << target << ", causing ";
	std::cout << _attackDamage << " points of damages !" END << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (_hitPoints <= 0) {
		std::cout << PUR "ClapTrap " << _name << RED " is already K.O." END << std::endl;
		return ;
	}
	std::cout << PUR "ClapTrap " << _name << RED " takes " << amount;
	std::cout << " points of damages" END << std::endl;
	if (_hitPoints <= amount) {
		_hitPoints = 0;
		std::cout << PUR "ClapTrap " << _name << RED " is K.O." END << std::endl;
		return ;
	}
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (_energyPoints <= 0 || _hitPoints <= 0) {
		if (_energyPoints <= 0)
			std::cout << PUR "ClapTrap " << _name << BLU " has no energy left and cannot heal" END << std::endl;
		if (_hitPoints <= 0)
			std::cout << PUR "ClapTrap " << _name << RED " is K.O. and cannot heal" END << std::endl;
		return ;
	}
	std::cout << PUR "ClapTrap " << _name << GRE " repairs itself and regains ";
	std::cout << amount << " hit points." END << std::endl;
	_hitPoints += amount;
	_energyPoints -= 1;
}
