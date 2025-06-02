/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:17:19 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/12 11:24:26 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/PresidentialPardonForm.hpp"
# include "../includes/Colors.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: AForm("PresidentialPardonForm", 25, 5) {
	this->setTarget("no target");
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target )
	: AForm("PresidentialPardonForm", 25, 5) {
	this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const& other )
	: AForm("PresidentialPardonForm", 25, 5) {
	this->setTarget(other.getTarget());
	this->setSignStatus(other.getSignStatus());
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const& other ) {
	if (this != &other) {
		this->setTarget(other.getTarget());
		this->setSignStatus(other.getSignStatus());
		testGradeRange();
	}
	std::cout << PUR "Form copy by assignement called." END << std::endl;
	return (*this);
}

bool	PresidentialPardonForm::execution( void ) const {
	std::cout << MAG << this->getTarget();
	std::cout << " has been pardoned by Zaphod Beeblebrox, trop de chance." END << std::endl;
	return (true);
}
