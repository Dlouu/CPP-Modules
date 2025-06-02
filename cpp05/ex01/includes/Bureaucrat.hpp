/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:05:01 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/20 10:59:56 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {

	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		Bureaucrat( void );
		Bureaucrat( const std::string name, int grade );
		Bureaucrat( Bureaucrat const& other );
		~Bureaucrat( void );
		
		Bureaucrat& 		operator=( Bureaucrat const& other );
		const std::string&	getName( void ) const;
		int					getGrade( void ) const;
		void				increment( void );
		void				decrement( void );
		void				signForm( Form& form );

	private:
		const std::string	_name;
		int					_grade;

		void				testGradeRange( void );
};

std::ostream& operator<<( std::ostream& outstream, Bureaucrat const& other );

#endif
