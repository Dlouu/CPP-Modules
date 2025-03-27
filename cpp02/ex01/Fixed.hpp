/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:47:42 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 10:54:48 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_rawBits;
		static int const	_bits;

	public:
		Fixed( void );
		Fixed( int const number );
		Fixed( float const floated );
		Fixed( Fixed const& other );
		~Fixed( void );

		Fixed&	operator=( Fixed const& other );

		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream& outstream, Fixed const& other );

#endif
