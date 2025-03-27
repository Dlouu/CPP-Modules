/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:58:46 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 12:28:07 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main ( void )
{
	PhoneBook	phoneBook;
	std::string	command;

	while (1) {
		if (!phoneBook.getEof()) {
			std::cout << MAG "Enter a command: " END;
			std::getline(std::cin, command);
		}
		if (command == "EXIT" || std::cin.eof()) {
			phoneBook.setEof(1);
			std::cout << std::endl << BLU "...Exiting PhoneBook" END << std::endl;
			std::cout << "Contacts are forever lost... " BLU "T-T\n" END << std::endl;
			break ;
		}
		else if (command == "ADD")
			phoneBook.addCommand();
		else if (command == "SEARCH")
			phoneBook.searchCommand();
		else
			std::cout << RED "Invalid command, type ADD, SEARCH or EXIT" END << std::endl;
	}
	return (0);
}
