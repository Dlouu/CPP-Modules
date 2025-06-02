/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:04:57 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/22 15:47:33 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/Colors.hpp"
#include <iostream>

int	main()
{
	std::cout << std::endl << BOLD "// TEST SUCCESS" END << std::endl;
	try {
		Bureaucrat michel = Bureaucrat("Michel", 1);
		std::cout << michel;
		Form form2 = Form("F042", 42, 42);
		std::cout << form2;
		michel.signForm(form2);
		std::cout << form2;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl << BOLD "// TEST FAIL TO SIGN" END << std::endl;
	try {
		Bureaucrat gontran = Bureaucrat("Gontran", 42);
		std::cout << gontran;
		Form form3 = Form("F666", 21, 1);
		std::cout << form3;
		gontran.signForm(form3);
		std::cout << form3;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << BOLD "// TEST FAIL TO CREATE" END << std::endl;
	try {
		Form form1 = Form("F001", 151, 1);
		std::cout << form1;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
