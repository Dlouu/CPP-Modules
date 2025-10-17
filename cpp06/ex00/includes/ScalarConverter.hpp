/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:49:23 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/09/23 11:04:20 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cmath>
# include <limits>
# include <cfloat>
# include <stdlib.h>

class ScalarConverter {
	public:	
		static void	convert( const std::string literal );

	private:
		ScalarConverter( void );
		ScalarConverter( const std::string literal );
		ScalarConverter( ScalarConverter const& other );
		~ScalarConverter( void );
		ScalarConverter& operator=( ScalarConverter const& other );
};

#endif
