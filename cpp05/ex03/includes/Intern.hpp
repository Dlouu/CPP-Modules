/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:05:01 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/07 12:56:12 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Bureaucrat;

class Intern {

	public:
		class UnknownFormException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		Intern( void );
		Intern( Intern const& other );
		~Intern( void );

		Intern&	operator=( Intern const& other );
		AForm*	makeForm( const std::string& form,
							const std::string& target ) const;
};

#endif
