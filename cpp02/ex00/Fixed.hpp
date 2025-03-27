/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:47:42 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 10:50:31 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_rawBits;
		static int const	_bits;

	public:
		Fixed( void );							// Constructeur par défaut
		Fixed( Fixed const& other );			// Constructeur de recopie
		~Fixed( void );							// Destructeur

		Fixed&	operator=( Fixed const& other );	// Opérateur d’affectation

		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
};

#endif
