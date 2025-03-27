/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:03:17 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/21 09:37:08 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# define PINK "\033[0;35m"
# define RED "\033[0;31m"
# define PURPLE "\033[0;34m"
# define END "\033[m"

class	HumanA {

	private:
		std::string	_name;
		Weapon&		_weapon;
		
	public:
		HumanA( std::string name, Weapon& weapon);
		~HumanA( void );

		void	attack( void );
};

#endif
