/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:17:19 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/22 15:38:33 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/RobotomyRequestForm.hpp"
# include "../includes/Colors.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
	: AForm("RobotomyRequestForm", 72, 45) {
	this->setTarget("no target");
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target )
	: AForm("RobotomyRequestForm", 72, 45) {
	this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& other )
	: AForm("RobotomyRequestForm", 72, 45) {
	this->setTarget(other.getTarget());
	this->setSignStatus(other.getSignStatus());
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const& other ) {
	if (this != &other) {
		this->setTarget(other.getTarget());
		this->setSignStatus(other.getSignStatus());
		testGradeRange();
	}
	std::cout << PUR "Form copy by assignement called." END << std::endl;
	return (*this);
}

bool	RobotomyRequestForm::execution( void ) const {
	std::cout << "Bzeeeewwwt bzeet bzuit!\n";
	std::srand(std::time(NULL));
	if (std::rand() % 2 == 0) {
		std::cout << MAG << this->getTarget();
		std::cout << " has been robotomized successfully!" END << std::endl;
	} else {
		std::cout << RED "Oups ! Robotomization has failed on ";
		std::cout << this->getTarget() << "." END << std::endl;
	}
	return (true);
}
