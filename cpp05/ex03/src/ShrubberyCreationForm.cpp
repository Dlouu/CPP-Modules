/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:17:19 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/16 13:09:38 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ShrubberyCreationForm.hpp"
# include "../includes/Colors.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: AForm("ShrubberyCreationForm", 145, 137) {
	this->setTarget("no target");
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target )
	: AForm("ShrubberyCreationForm", 145, 137) {
	this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const& other )
	: AForm("ShrubberyCreationForm", 145, 137) {
	this->setTarget(other.getTarget());
	this->setSignStatus(other.getSignStatus());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const& other ) {
	if (this != &other) {
		this->setTarget(other.getTarget());
		this->setSignStatus(other.getSignStatus());
		testGradeRange();
	}
	std::cout << PUR "Form copy by assignement called." END << std::endl;
	return (*this);
}

bool	ShrubberyCreationForm::execution( void ) const {
	std::ofstream	outfile((getTarget() + "_shrubbery").c_str());
	if (outfile.fail()) {
		std::cerr << RED "Error while creating file." END << std::endl;
		throw FileFailedException();
	}
	outfile << "     .{{}}}}}}. " \
	"\n    {{{{{{(`)}}}.          .{{}}}}}}." \
	"\n   {{{(`)}}}}}}}}}        {{{{{{(`)}}}." \
	"\n  }}}}}}}}}{{(`){{{      {{{(`)}}}}}}}}}" \
	"\n  }}}}{{{{(`)}}{{{{     }}}}{{{{(`)}}{{{{" \
	"\n {{{(`)}}}}}}}{}}}}}   {{{(`)}}}}}}}{}}}}}" \
	"\n{{{{{{{{(`)}}}}}}}}}} {{{{{{{{(`)}}}}}}}}}}" \
	"\n{{{{{{{}{{{{(`)}}}}}} {{{{{{{}{{{{(`)}}}}}}" \
	"\n {{{{{(`)   {{{{(`)}'  {{{{{(`)   {{{{(`)}'" \
	"\n  `\"\"'\" |   | \"'\"'      `\"\"'\" |   | \"'\"'" \
	"\n  (`)  /     \\  VIVE LES (`) /     \\   (`)" \
	"\n                 POMMES           (`)" << std::endl;
	outfile.close();
	return (true);
}
