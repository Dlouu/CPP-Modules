/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:04:57 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/22 15:54:12 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

int	main()
{
	try {
		Bureaucrat michel = Bureaucrat("Michel", 1);
		std::cout << michel;
		michel.decrement();
		std::cout << michel;
		michel.increment();
		std::cout << michel;
		michel.increment();
		std::cout << michel;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what();
	}
	std::cout << std::endl;
	try {
		Bureaucrat random;
		std::cout << random;
		random.decrement();
		std::cout << random;
		random.increment();
		std::cout << random;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what();
	}
}
