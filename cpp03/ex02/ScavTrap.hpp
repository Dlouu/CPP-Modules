/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:26:38 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/01 09:28:00 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

# define RED "\033[0;31m"
# define PUR "\033[0;34m"
# define GRE "\033[0;32m"
# define YEL "\033[0;33m"
# define MAG "\033[0;35m"
# define BLU "\033[0;36m"
# define END "\033[m"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );
		ScavTrap( ScavTrap const& other );
		ScavTrap& operator=( ScavTrap const& other );

		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif
