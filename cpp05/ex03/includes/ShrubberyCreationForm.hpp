/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:05:01 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/20 11:03:16 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const std::string& target );
		ShrubberyCreationForm( ShrubberyCreationForm const& other );
		~ShrubberyCreationForm( void );
		
		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const& other );
		bool					execution( void ) const;
};

#endif
