/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:03:22 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/21 09:38:12 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

# define PINK "\033[0;35m"
# define RED "\033[0;31m"
# define PURPLE "\033[0;34m"
# define END "\033[m"

class	HumanB {

	private:
		std::string	_name;
		Weapon*		_weapon;
		
	public:
		HumanB( std::string name );
		~HumanB( void );

		void	attack( void );
		void	setWeapon( Weapon& weapon );
};

#endif
