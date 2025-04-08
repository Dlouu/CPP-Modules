/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/02 11:20:33 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"
# include "Colors.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( WrongCat const& other );
		WrongCat& operator=( WrongCat const& other );
		~WrongCat( void );

		void	makeSound( void ) const;
};

#endif
