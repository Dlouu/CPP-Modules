/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:42:26 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 12:25:03 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

Contact::~Contact( void ) {}

void	Contact::setContact( std::string input, e_info info ) {
	if (info == FIRST)
		_firstName = input;
	else if (info == LAST)
		_lastName = input;
	else if (info == NICKNAME)
		_nickname = input;
	else if (info == PHONE)
		_phoneNumber = input;
	else if (info == SECRET)
		_darkestSecret = input;
}

std::string	Contact::getContactInfo( e_info info ) {

	std::string truncated;

	if (info == FIRST)
		truncated = _firstName;
	else if (info == LAST)
		truncated = _lastName;
	else if (info == NICKNAME)
		truncated = _nickname;
	if (truncated.length() > 10) {
		truncated = truncated.substr(0, 9);
		truncated += ".";
	}
	return (truncated);
}

void	Contact::printContact( void ) {
	std::cout << std::endl << "Selected contact informations :" << std::endl << std::endl;
	std::cout << std::left;
	std::cout << PUR << std::setw(16) << "First name: " END << _firstName << std::endl;
	std::cout << PUR << std::setw(16) << "Last name: " END << _lastName << std::endl;
	std::cout << PUR << std::setw(16) << "Nickname: " END << _nickname << std::endl;
	std::cout << PUR << std::setw(16) << "Phone number: " END << _phoneNumber << std::endl;
	std::cout << PUR << std::setw(16) << "Darkest secret: " END << _darkestSecret << std::endl;
	std::cout << std::endl;
}
