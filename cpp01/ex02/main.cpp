/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:35:23 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/02/26 10:29:19 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define PURPLE	"\033[0;34m"
#define END		"\033[m"

int	main( void ) {
	std::string brain = "HI THIS IS BRAIN";
	std::string* brainPTR = &brain;
	std::string& brainREF = brain;

	std::cout << PURPLE "ADRESSES" END		<< std::endl;
	std::cout << "variable:  " << &brain	<< std::endl;
	std::cout << "pointer:   " << brainPTR	<< std::endl;
	std::cout << "reference: " << &brainREF	<< std::endl;

	std::cout << PURPLE "\nVALUES" END		<< std::endl;
	std::cout << "variable:  " << brain		<< std::endl;
	std::cout << "pointer:   " << *brainPTR	<< std::endl;
	std::cout << "reference: " << brainREF	<< std::endl;
	return (0);
}
