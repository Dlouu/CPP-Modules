/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/07 16:16:46 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Colors.hpp"

class AAnimal
{
	protected:
		std::string	_type;
	
	public:
		AAnimal( void );
		AAnimal( std::string type );
		virtual ~AAnimal( void );
		AAnimal( AAnimal const& other );
		AAnimal& operator=( AAnimal const& other );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;
};

#endif
