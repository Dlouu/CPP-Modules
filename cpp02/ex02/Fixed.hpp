/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:47:42 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 10:55:00 by mbaumgar         ###   ########.fr       */
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
	
		Fixed&				operator=( Fixed const& other );
		bool				operator>( Fixed const& other ) const;
		bool				operator<( Fixed const& other ) const;
		bool				operator>=( Fixed const& other );
		bool				operator<=( Fixed const& other );
		bool				operator==( Fixed const& other );
		bool				operator!=( Fixed const& other );

		Fixed&				operator++();
		Fixed&				operator--();
		Fixed				operator++(int);
		Fixed				operator--(int);

		Fixed				operator+( Fixed const& other );
		Fixed				operator-( Fixed const& other );
		Fixed				operator*( Fixed const& other );
		Fixed				operator/( Fixed const& other );

		static const Fixed&	min( Fixed const& lhs, Fixed const& rhs );
		static Fixed&		min( Fixed& lhs, Fixed& rhs );
		static const Fixed&	max( Fixed const& lhs, Fixed const& rhs );
		static Fixed&		max( Fixed& lhs, Fixed& rhs );

		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		float				toFloat( void ) const;
		int					toInt( void ) const;
};

std::ostream& operator<<( std::ostream& outstream, Fixed const& other );

#endif
