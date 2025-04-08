/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/02 11:20:33 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Colors.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( Cat const& other );
		Cat& operator=( Cat const& other );
		~Cat( void );

		void	makeSound( void ) const;
		void	setBrainIdea( int i, std::string idea );
		void	setBrainIdeas( std::string idea );
		void	printIdeas( void ) const;

	private:
		Brain	*_brain;
};

#endif
