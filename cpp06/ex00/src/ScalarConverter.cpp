/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:30:42 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/10/17 10:22:31 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ScalarConverter.hpp"
# include "../includes/Colors.hpp"

ScalarConverter::ScalarConverter( void ) {
	std::cout << PUR "Constructor called" END << std::endl;
}

ScalarConverter::ScalarConverter( const std::string literal ) {
	std::cout << PUR << literal << END << std::endl;
}

ScalarConverter::~ScalarConverter( void ) {
	std::cout << PUR "Destructor called" END << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const& other ) {
	*this = other;
	std::cout << PUR "ScalarConverter copy by construction called" END << std::endl;
}

ScalarConverter& ScalarConverter::operator=( ScalarConverter const& other ) {
	if (this == &other)
		return (*this);
	std::cout << PUR "ScalarConverter copy by assignement called" END << std::endl;
	return (*this);
}

void	ScalarConverter::convert( const std::string literal ) {
	char	c;
	int		i;
	float	fl;
	double	dbl;

	//casting typewise
	if (literal.length() == 1 && !std::isdigit(literal[0])) {
		c	= literal[0];
		i	= static_cast <int>(c);
		fl	= static_cast <float>(c);
		dbl	= static_cast <double>(c);
	}
	else if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'') {
		c	= literal[1];
		i	= static_cast <int>(c);
		fl	= static_cast <float>(c);
		dbl	= static_cast <double>(c);
	}
	else {
		dbl	= std::atof(literal.c_str());
		c	= static_cast <char>(dbl);
		i	= static_cast <int>(dbl);
		fl	= static_cast <float>(dbl);
	}

	//print character
	std::cout << BLU "char :   " END;
	if (dbl < std::numeric_limits <char>::min()
		|| dbl > std::numeric_limits <char>::max())
		std::cout << "not in range" << std::endl;
	else if (std::isnan(dbl))
		std::cout << "impossible"<< std::endl;
	else if (std::isinf(dbl))
		std::cout << "impossible"<< std::endl;
	else if (!std::isprint(c))
		std::cout << "non displayable"<< std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;

	//print integer
	std::cout << YEL "int :    " END;
	if (dbl < std::numeric_limits <int>::min()
		|| dbl > std::numeric_limits <int>::max())
		std::cout << "not in range" << std::endl;
	else if (std::isnan(dbl))
		std::cout << "impossible" << std::endl;
	else if (std::isinf(dbl))
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;

	//print float
	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	std::cout << MAG "float :  " END << fl << "f" << std::endl;

	//print double
	std::cout << PUR "double : " END << dbl << std::endl;
}
