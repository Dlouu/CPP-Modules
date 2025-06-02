/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:04:57 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/22 15:47:50 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

int	main()
{
	try {
		std::cout << BOLD "\n// SHRUBBERY CREATION" END << std::endl;
		Bureaucrat robert = Bureaucrat("Robert", 1);
		ShrubberyCreationForm shrub("Gontran");
		robert.signForm(shrub);
		robert.signForm(shrub);
		shrub.print();
		robert.executeForm(shrub);
	}
	catch (const std::exception& e) {
		std::cerr << "SHRUBBERY EXCEPTION: " << e.what();
	}
	try {
		std::cout << BOLD "\n// ROBOTOMY REQUEST" END << std::endl;
		Bureaucrat hubert = Bureaucrat("Hubert", 1);
		RobotomyRequestForm beep("Theodule");
		hubert.signForm(beep);
		beep.print();
		hubert.executeForm(beep);
	}
	catch (const std::exception& e) {
		std::cerr << "ROBOTOMY EXCEPTION: " << e.what();
	}
	try {
		std::cout << BOLD "\n// PRESIDENTIAL PARDON" END << std::endl;
		Bureaucrat albert = Bureaucrat("Albert", 1);
		PresidentialPardonForm oups("Dimitri");
		albert.signForm(oups);
		oups.print();
		albert.executeForm(oups);
	}
	catch (const std::exception& e) {
		std::cerr << "PRESIDENTIAL EXCEPTION: " << e.what();
	}
}
