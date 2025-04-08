/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/03 12:14:28 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Colors.hpp"

class Animal
{
	protected:
		std::string	_type;
	
	public:
		Animal( void );
		Animal( std::string type );
		virtual ~Animal( void );
		Animal( Animal const& other );
		Animal& operator=( Animal const& other );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif
