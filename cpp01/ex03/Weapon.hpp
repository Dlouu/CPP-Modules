/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:03:30 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/02/21 15:02:58 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon {

	private:
		std::string	_type;
	
	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );

		void				setType( std::string type );
		const std::string&	getType( void ) const;
};

#endif
