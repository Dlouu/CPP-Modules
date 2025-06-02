/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:17:19 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/19 13:55:31 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/AForm.hpp"
# include "../includes/Colors.hpp"
# include "../includes/Bureaucrat.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
	return (RED "grade is too high.\n" END);
}

const char* AForm::GradeTooLowException::what() const throw() {
	return (RED "grade is too low.\n" END);
}

const char* AForm::UnsignedFormException::what() const throw() {
	return (RED "form is unsigned.\n" END);
}

const char* AForm::AlreadySignedException::what() const throw() {
	return (RED "it's already signed.\n" END);
}

const char* AForm::FileFailedException::what() const throw() {
	return (RED "file failed.\n" END);
}

AForm::AForm( void )
	:	_name(""),
		_gradeToSign(150),
		_gradeToExecute(150),
		_signed(false),
		_target("no target") {
	testGradeRange();
	std::cout << BLU "Form default constructor called" END << std::endl;
}

AForm::AForm( const std::string name, const int gradeToSign, const int gradeToExecute )
	:	_name(name),
		_gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute),
		_signed(false),
		_target("no target") {
	testGradeRange();
	std::cout << BLU "Form named " << _name << " has been created." END << std::endl;
}

AForm::~AForm( void ) {
	std::cout << BLU "Form named " << _name << " has been deleted." END << std::endl;
}

AForm::AForm( AForm const& other )
	:	_name(other._name),
		_gradeToSign(other._gradeToSign),
		_gradeToExecute(other._gradeToExecute),
		_signed(other._signed),
		_target(other._target) {
	testGradeRange();
	std::cout << PUR "Form copy by construction called" END << std::endl;
}

AForm& AForm::operator=( AForm const& other ) {
	if (this != &other) {
		this->_signed = other._signed;
		this->_target = other._target;
		testGradeRange();
		std::cout << RED "name and grades cannot be changed (const var)." << std::endl;
		std::cout << "= operator isn't relevant in this case!" END << std::endl;
	}
	std::cout << PUR "Form copy by assignement called" END << std::endl;
	return (*this);
}

const std::string&	AForm::getName( void ) const {
	return (this->_name);
}

int	AForm::getGradeToSign( void ) const {
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute( void ) const {
	return (this->_gradeToExecute);
}

bool	AForm::getSignStatus( void ) const {
	return (this->_signed);
}

const std::string&	AForm::getTarget( void ) const {
	return (this->_target);
}

void	AForm::setTarget( const std::string& target ) {
	this->_target = target;
}

void	AForm::setSignStatus( bool isSigned ) {
	if (isSigned)
		this->_signed = true;
	else
		this->_signed = false;
}

void	AForm::testGradeRange( void ) {
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw GradeTooLowException();
}

bool	AForm::beSigned( Bureaucrat& bureaucrat ) {
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

bool	AForm::execute( const Bureaucrat& executor ) const {
	if (this->_gradeToExecute < executor.getGrade()) {
		throw Bureaucrat::GradeTooLowException();
		return (false);
	}
	if (this->_signed == false) {
		throw UnsignedFormException();
		return (false);
	}
	if (this->execution() == false)
		return (false);
	return (true);
}

void	AForm::print( void ) {
	std::cout << BLU "╭ - " END "Form" BLU " ╴ ╴ ╴";
	std::cout << std::endl << "|          Name: " GRE;
	std::cout << this->getName();
	std::cout << std::endl << BLU "|        Target: " GRE;
	std::cout << this->getTarget();
	std::cout << std::endl << BLU "| Grade to sign: " GRE;
	std::cout << this->getGradeToSign();
	std::cout << std::endl << BLU "|    to execute: " GRE;
	std::cout << this->getGradeToExecute();
	std::cout << std::endl << BLU "|     is signed: " GRE;
	(this->getSignStatus() ? std::cout << "YES\n" : (std::cout << "NO \n"));
	std::cout << BLU "╰ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴" END << std::endl;
}

std::ostream& operator<<( std::ostream& outstream, AForm const& form ) {
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
