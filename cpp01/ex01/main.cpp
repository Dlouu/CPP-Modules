/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:35:23 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/21 09:27:27 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main( void ) {
	Zombie*	horde, * anotherHorde;
	horde = zombieHorde(3, "Bleurgh");
	anotherHorde = zombieHorde(4, "Blargh");
	delete [] horde;
	delete [] anotherHorde;
	return (0);
}
