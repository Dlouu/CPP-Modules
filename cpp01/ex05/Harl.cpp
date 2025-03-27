/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:33:54 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/21 09:48:35 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	std::cout << BLUE;
	std::cout << "Hello I'm Harl the complainer\n";
	std::cout << END;
	std::cout << std::endl;
}

Harl::~Harl() {
	std::cout << BLUE;
	std::cout << "\nOh ! Harl is dead, ooooooh no so sad.";
	std::cout << END;
	std::cout << std::endl;
}

void	Harl::_debug( void ) const {
	std::cout << PURPLE;
	std::cout << "1. debug:   ";
	std::cout << END;
	std::cout << "Grrrrr.";
	std::cout << std::endl;
}

void	Harl::_info( void ) const {
	std::cout << MAGENTA;
	std::cout << "2. info:    ";
	std::cout << END;
	std::cout << "GRRRRRrr!";
	std::cout << std::endl;
}

void	Harl::_warning( void ) const {
	std::cout << YELLOW;
	std::cout << "3. warning: ";
	std::cout << END;
	std::cout << "Fnuuuuuuuuuuuuuw~";
	std::cout << std::endl;
}

void	Harl::_error( void ) const {
	std::cout << RED;	
	std::cout << "4. error:   ";
	std::cout << END;
	std::cout << "BWAAAAAAAARGH~ 🦖";
	std::cout << std::endl;
}

void	Harl::_notReallyComplaining( std::string randomShit ) const {
	std::cout << BLUE "0. Harl:    ";	
	std::cout << END;
	std::cout << randomShit;
	std::cout << std::endl;
}

void	Harl::complain( std::string level ) const {
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fPtr[4])(void) const = {&Harl::_debug,
					&Harl::_info, &Harl::_warning, &Harl::_error};
	for (int i = 0; i < 4; i++) {
		if (level == lvl[i]) {
			(this->*fPtr[i])();
		return ;
		}
	}
	_notReallyComplaining(level);
}
