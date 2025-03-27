/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:21:51 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/02/22 20:45:26 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RED "\033[0;31m"
# define PUR "\033[0;34m"
# define END "\033[m"

class Zombie
{	
	private:
		std::string	_name;

	public:
		void	announce( void );
		void	setName( std::string name );
	
		Zombie( void );
		~Zombie( void );
};

# endif
