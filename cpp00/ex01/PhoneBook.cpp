/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:02:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 12:42:57 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	_total = 0;
	_index = 1;
	_eof = 0;
	std::cout << std::endl;
	std::cout << "     ,'''." << std::endl;
	std::cout << "     )  ,|   " << BLU "m y  _    a w e s o m e  _            \n" END ;
	std::cout << "    /  /,'-.     " << PUR "|_) |_   _  ._   _  |_)  _   _  | \n" END ;
	std::cout << "   /  //  /.`.   " << MAG "|   | | (_) | | (/_ |_) (_) (_) |<\n" END ;
	std::cout << " ,'  //  /  `.`." << std::endl;
	std::cout << "(    )--.`.   //| available commands" << std::endl;
	std::cout << "|`--'|   `.`.// |   ~ " YEL "ADD" END "    add a new contact\n";
	std::cout << " `--'      `./ /    ~ " PUR "SEARCH" END " view contact entries\n";
	std::cout << "   |_________|/     ~ " BLU "EXIT" END "   bye-bye !\n";
	std::cout << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << MAG "Bye~bye Phonebook !" END << std::endl;
	return ;
}

void	PhoneBook::addCommand( void ) {
	std::string input = "";
	std::string fields[] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};
	int current_field = 0;
	
	if (_index > 8)
		_index = 1;
	std::cout << std::endl << "Enter your contact informations :\n" << std::endl;
	while (current_field < 5) {
		std::cout << YEL << fields[current_field] << ": " END;
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			setEof(1);
			break ;
		}
		else if (input.empty()) {
			std::cout << RED "Empty entry, please type something" END << std::endl;
			continue ;
		}
		else if (!isPrintable(input)) {
			std::cout << RED "Invalid entry, please try again with printable characters" END << std::endl;
			continue ;
		}
		else {
			_contacts[_index - 1].setContact(input, (e_info)current_field);
			current_field++;
		}
	}
	if (_eof)
		return ;
	std::cout << "\nSuccess! contact added at index " YEL << _index << std::endl << std::endl;
	_index++;
	if (_total < 8)
		_total++;
}

void	PhoneBook::searchCommand( void ) {
	std::string input = "";
	
	_index = 1;
	headerTable();
	if (_total == 0)
		return (emptyTable());
	while (_index <= _total) {
		Contact contact = _contacts[_index - 1];
		std::cout << "	╷ " << _index << " |";
		std::cout << std::left << std::setw(10) << contact.getContactInfo(FIRST) << "|";
		std::cout << std::left << std::setw(10) << contact.getContactInfo(LAST) << "|";
		std::cout << std::left << std::setw(10) << contact.getContactInfo(NICKNAME) << "| ╷" << std::endl;
		_index++;
	}
	footerTable();
	std::cout << PUR "Enter the index of the contact you want to see: " END;
	while (1) {
		std::getline(std::cin, input);
		if (std::cin.eof())
		break ;
		if (input.empty() || input.length() > 1 || !isdigit(input[0]) || input[0] - '0' > _total || input[0] - '0' < 1)	{
			std::cout << RED "Invalid input, type an index between 1 and " << _total << END << std::endl;
			continue ;
		}
		_contacts[input[0] - '0' - 1].printContact();
		break ;
	}
}

void	PhoneBook::headerTable( void ) {
	std::cout << std::endl;
	std::cout << BLU "                      ~my awesome" END << std::endl;
	std::cout << MAG "                   P H O N E B O O K" END << std::endl;
	std::cout << "	╭ ╴ ╴ ╴ ╴ ╴ " PUR "C O N T A C T S " END " ╴ ╴ ╴ ╴ ╴ ╮" << std::endl;
	std::cout << "	╷                                      ╷" << std::endl;
	std::cout << "	╷ #  firstname ╷ lastname ╷ nickname   ╷" << std::endl;
	std::cout << "	╷    ---------- ---------- ----------  ╷" << std::endl;
}

void	PhoneBook::emptyTable( void ) {
	std::cout << "	╷ 0 |   none   |   none   |   none   | ╷" << std::endl;
	std::cout << "	╷    ---------- ---------- ----------  ╷" << std::endl;
	std::cout << "	╷                                      ╷" << std::endl;
	std::cout << "	╷    " BLU "PhoneBook is empty..." END "             ╷" << std::endl;
	std::cout << "	╷    " YEL "Add contact" END " & try again please    ╷" << std::endl;
	std::cout << "	╷                                      ╷" << std::endl;
	std::cout << "	╰  ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╯" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::footerTable( void ) {
	std::cout << "	╷    ---------- ---------- ----------  ╷" << std::endl;
	std::cout << "	╰  ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╴ ╯" << std::endl;
	std::cout << std::endl;
}

int		PhoneBook::isPrintable( std::string str ) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!isprint(str[i]))
			return (0);
	}
	return (1);
}

void	PhoneBook::setEof( int eof ) {
	_eof = eof;
}

int		PhoneBook::getEof( void ) {
	return _eof;
}
