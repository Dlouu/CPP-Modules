/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:35:23 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/02/27 20:46:35 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

int	main( void ) {
	Zombie*	zombHeap = newZombie("ZombHeap");
	zombHeap->announce();
	randomChump("StackBoi");
	delete zombHeap;
	return (0);
}
