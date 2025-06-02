/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:17:19 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/19 13:53:45 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Intern.hpp"
# include "../includes/Colors.hpp"

const char* Intern::UnknownFormException::what() const throw() {
	return (RED "form doesn't exist, use Robotomy Request, " \
		"Shrubbery Creation or Presidential Pardon please.\n" END);
}

Intern::Intern( void ) {
	std::cout << PUR "Random Intern here!" END << std::endl;
}

Intern::~Intern( void ) {
	std::cout << PUR "Byebye Intern !" END << std::endl;
}

Intern::Intern( Intern const& other ) {
	(void)other;
	std::cout << PUR "Intern copy by construction called" END << std::endl;
}

Intern& Intern::operator=( Intern const& other ) {
	(void)other;
	std::cout << PUR "Intern copy by assignement called" END << std::endl;
	return (*this);
}

static AForm*	makeRobotomyRequest( const std::string& target ) {
	std::cout << "Intern creates Robotomy Request form." << std::endl;
	return (new RobotomyRequestForm(target));
}

static AForm*	makePresidentialPardon( const std::string& target ) {
	std::cout << "Intern creates Presidential Pardon form." << std::endl;
	return (new PresidentialPardonForm(target));
}

static AForm*	makeShrubberyCreation( const std::string& target ) {
	std::cout << "Intern creates Shrubbery Creation form." << std::endl;
	return (new ShrubberyCreationForm(target));
}

static AForm*	invalidForm( const std::string& target ) {
	(void)target;
	std::cout << RED "Intern cannot create this kind of form." END << std::endl;
	throw (Intern::UnknownFormException());
	return (NULL);
}

AForm*	Intern::makeForm( const std::string& form,
							const std::string& target ) const {
	int i = 0;
	std::string	f[3] = {"robotomy request",
						"presidential pardon",
						"shrubbery creation"};
	AForm		*(*func[4])(const std::string& target) =
							{&makeRobotomyRequest,
							&makePresidentialPardon,
							&makeShrubberyCreation,
							&invalidForm};
	std::string formLowerCaps = form;
	for (size_t j = 0; j < formLowerCaps.length(); j++) {
		formLowerCaps[j] = (char)tolower(formLowerCaps[j]);
	}
	while (i < 3 && formLowerCaps != f[i])
		i++;
	return (func[i])(target);
}
