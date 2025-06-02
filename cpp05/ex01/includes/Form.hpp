/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:05:01 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/09 09:04:08 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class AlreadySignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		Form( void );
		Form( const std::string name, const int gradeToSign, const int gradeToExecute );
		Form( Form const& other );
		~Form( void );
		
		Form& 				operator=( Form const& other );
		const std::string&	getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				getSignStatus( void ) const;
		void				setSignStatus( bool isSigned );

		bool				beSigned( Bureaucrat& bureaucrat );
		void				testGradeRange( void );

	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_signed;
};

std::ostream& operator<<( std::ostream& outstream, Form const& form );

#endif
