/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:04:57 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/22 15:54:14 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

int	main()
{
	try {
		std::cout << BOLD "\n// INTERN FORM MAKER" END << std::endl;
		{
			Intern someRandomIntern;
			AForm* rrf;
			Bureaucrat phil = Bureaucrat("Philibert", 20);
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			phil.signForm(*rrf);
			phil.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
		{
			Intern random;
			AForm *rrf, *ppf, *scf, *fail;
			rrf = random.makeForm("robotomy request", "osef");
			delete rrf;
			ppf = random.makeForm("presidential pardon", "osef");
			delete ppf;
			scf = random.makeForm("Shrubbery Creation", "target");
			delete scf;
			fail = random.makeForm("blah", "target");
			delete fail;
		}
	}
	catch (const std::exception& e) {
		std::cerr << "INTERN EXCEPTION: " << e.what();
	}
}
