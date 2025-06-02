/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:17:19 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/19 13:53:45 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Bureaucrat.hpp"
# include "../includes/Colors.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return (RED "grade is too high.\n" END);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return (RED "grade is too low.\n" END);
}

Bureaucrat::Bureaucrat( void ) : _name("Bureaucrat"), _grade(150) {
	std::cout << PUR "Random Bureaucrat here!" END << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade )
	: _name(name) {
	this->_grade = grade;
	testGradeRange();
	std::cout << PUR "Welcome to grade " << _grade << " bureaucrat " << _name << "!" END << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << PUR "Byebye " << _name << "!" END << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const& other ) : _name(other._name) {
	this->_grade = other._grade;
	std::cout << PUR "Bureaucrat copy by construction called" END << std::endl;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const& other ) {
	if (this != &other) {
		this->_grade = other._grade;
	}
	std::cout << PUR "Bureaucrat copy by assignement called" END << std::endl;
	std::cout << "The name cannot be changed like that!" << std::endl;
	return (*this);
}

const std::string&	Bureaucrat::getName( void ) const {
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void	Bureaucrat::increment( void ) {
	_grade -= 1;
	testGradeRange();
}

void	Bureaucrat::decrement( void ) {
	_grade += 1;
	testGradeRange();
}

void	Bureaucrat::testGradeRange( void ) {
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm( AForm& form ) {
	try {
		if (form.beSigned(*this))
			std::cout << GRE << this->getName() << " signed " << form.getName() << "." END << std::endl;
		else
			throw GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException &eTooLow) {
		std::cerr << RED << this->getName() << " couldn't sign " << form.getName();
		std::cerr << " because " << this->getName() << "'s " END << eTooLow.what();
	}
	catch (const AForm::AlreadySignedException &eAlreadySigned) {
		std::cerr << RED << this->getName() << " couldn't sign " << form.getName();
		std::cerr << " because " END << eAlreadySigned.what();
	}
}

void	Bureaucrat::executeForm(AForm const& form) const {
	try {
		if (form.execute(*this) == true)
			std::cout << GRE << _name << " executed " << form.getName() << "." END << std::endl;
	}
	catch (const AForm::FileFailedException &eFileFailed) {
		std::cerr << RED << this->getName() << " couldn't execute ";
		std::cerr << form.getName() << " because " END << eFileFailed.what();
		return ;
	}
	catch (const Bureaucrat::GradeTooLowException &eTooLow) {
		std::cerr << RED << this->getName() << " couldn't execute ";
		std::cerr << form.getName() << " because ";
		std::cerr << this->getName() << "'s " END << eTooLow.what();
		return ;
	}
	catch (const AForm::UnsignedFormException &eUnsigned) {
		std::cerr << RED << this->getName() << " couldn't execute ";;
		std::cerr << form.getName() << " because the " END << eUnsigned.what();
		return ;
	}
}

std::ostream& operator<<( std::ostream& outstream, Bureaucrat const& other ) {
	outstream << MAG;
	outstream << other.getName();
	outstream << ", " YEL "bureaucrat grade ";
	outstream << other.getGrade();
	outstream << END ".";
	outstream << std::endl;
	return (outstream);
}
