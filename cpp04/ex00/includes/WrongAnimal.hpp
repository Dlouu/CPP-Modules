/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/03 11:38:30 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "Colors.hpp"

class WrongAnimal
{
	protected:
		std::string	_type;
	
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		virtual ~WrongAnimal( void );
		WrongAnimal( WrongAnimal const& other );
		WrongAnimal& operator=( WrongAnimal const& other );

		void			makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif
