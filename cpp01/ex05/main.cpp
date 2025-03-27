/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:31:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/21 10:45:59 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void ) {

	Harl	harl;

	harl.complain( "Nyanyanya." );
	harl.complain( "DEBUG" );
	harl.complain( "INFO" );
	harl.complain( "ça va ça va." );
	harl.complain( "DEBUG" );
	harl.complain( "INFO" );
	harl.complain( "WARNING" );
	harl.complain( "ERROR" );
	harl.complain( "ERROR" );
	harl.complain( "voilà." );
	return (0);
}
