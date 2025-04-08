/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:17:58 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/02 11:20:33 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"
# include "Colors.hpp"

class Brain
{
	public:
		Brain( void );
		Brain( Brain const& other );
		Brain& operator=( Brain const& other );
		~Brain( void );

		void				setIdea( int i, std::string idea );
		const std::string&	getIdea( int i ) const;

	private:
		std::string	_ideas[100];
};

#endif
