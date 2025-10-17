/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:49:55 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/07/28 15:25:53 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "./convert value\n" << std::endl;
		std::cerr << "for char between 0 and 9, use quotes :" << std::endl;
		std::cerr << "./convert \"\'0\'\"" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
