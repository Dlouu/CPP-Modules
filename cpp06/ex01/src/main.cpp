/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:49:55 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/09/29 19:41:45 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/Serializer.hpp"
#include "./../includes/Colors.hpp"

int	main( void ) {
	Data *before = new Data;
	before->i = 6;
	before->c = '&';

	std::cout << PUR "Print unserialized data" END << std::endl;
	std::cout << "before->i = " << before->i << std::endl;
	std::cout << "before->c = " << before->c << std::endl;
	
	uintptr_t ptr = Serializer::serialize(before);
	Data *result = Serializer::deserialize(ptr);

	std::cout << MAG "\nPrint serialized-deserialized data" END << std::endl;
	std::cout << "result->i = " << result->i << std::endl;
	std::cout << "result->c = " << result->c << std::endl;

	delete before;

	return (0);
}
