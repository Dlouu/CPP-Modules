/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:05:01 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/20 11:01:24 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const std::string& target );
		PresidentialPardonForm( PresidentialPardonForm const& other );
		~PresidentialPardonForm( void );
		
		PresidentialPardonForm&	operator=( PresidentialPardonForm const& other );
		bool					execution( void ) const;
};

#endif
