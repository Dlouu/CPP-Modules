/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:17:19 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/22 15:43:10 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Form.hpp"
# include "../includes/Colors.hpp"
# include "../includes/Bureaucrat.hpp"

const char* Form::GradeTooHighException::what() const throw() {
	return (RED "grade is too high.\n" END);
}

const char* Form::GradeTooLowException::what() const throw() {
	return (RED "grade is too low.\n" END);
}

const char* Form::AlreadySignedException::what() const throw() {
	return (RED "it's already signed.\n" END);
}

Form::Form( void )	:	_name(""),
						_gradeToSign(150),
						_gradeToExecute(150),
						_signed(false) {
	testGradeRange();
	std::cout << BLU "Form default constructor called" END << std::endl;
}

Form::Form( const std::string name, const int gradeToSign, const int gradeToExecute )
					:	_name(name),
						_gradeToSign(gradeToSign),
						_gradeToExecute(gradeToExecute),
						_signed(false) {
	testGradeRange();
	std::cout << BLU "Form n° " << _name << " has been created." END << std::endl;
}

Form::~Form( void ) {
	std::cout << BLU "Form n° " << _name << " has been deleted." END << std::endl;
}

Form::Form( Form const& other )
					:	_name(other._name),
						_gradeToSign(other._gradeToSign),
						_gradeToExecute(other._gradeToExecute),
						_signed(other._signed) {
	testGradeRange();
	std::cout << PUR "Form copy by construction called" END << std::endl;
}

Form& Form::operator=( Form const& other ) {
	if (this != &other) {
		this->_signed = other._signed;
		testGradeRange();
		std::cout << RED "name and grades cannot be changed (const var)." << std::endl;
		std::cout << "= operator isn't relevant in this case!" END << std::endl;
		
	}
	std::cout << PUR "Form copy by assignement called" END << std::endl;
	return (*this);
}

const std::string&	Form::getName( void ) const {
	return (this->_name);
}

int	Form::getGradeToSign( void ) const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute( void ) const {
	return (this->_gradeToExecute);
}

bool	Form::getSignStatus( void ) const {
	return (this->_signed);
}

void	Form::setSignStatus( bool isSigned ) {
	if (isSigned)
		this->_signed = true;
	else
		this->_signed = false;
}

void	Form::testGradeRange( void ) {
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw GradeTooLowException();
}

bool	Form::beSigned( Bureaucrat& bureaucrat ) {
	if (this->getSignStatus() == true) {
		std::cout << GRE << this->getName() << " is already signed." END << std::endl;
		throw AlreadySignedException();
		return (_signed);
	}
	if (bureaucrat.getGrade() <= this->getGradeToSign()) {
		setSignStatus(true);
	}
	return (_signed);
}

std::ostream& operator<<( std::ostream& outstream, Form const& form ) {
	outstream << BLU "╭ ╴ ╴ ╴ " END "Form n°: ";
	outstream << form.getName();
	outstream << std::endl << BLU "| Grade to sign: " GRE;
	outstream << form.getGradeToSign();
	outstream << std::endl << BLU "|    to execute: " GRE;
	outstream << form.getGradeToExecute();
	outstream << std::endl << BLU "|     is signed: " GRE;
	(form.getSignStatus() ? outstream << "YES\n" : (outstream << "NO \n"));
	outstream << BLU "╰ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴" END << std::endl;
	return (outstream);
}
