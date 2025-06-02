/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:05:01 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/05/22 16:29:40 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class UnsignedFormException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class AlreadySignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class FileFailedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		AForm( void );
		AForm( const std::string name, const int gradeToSign, const int gradeToExecute );
		AForm( AForm const& other );
		virtual ~AForm( void );
		
		AForm&				operator=( AForm const& other );
		const std::string&	getName( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		bool				getSignStatus( void ) const;
		const std::string&	getTarget( void ) const;
		void				setTarget( const std::string& target );
		void				setSignStatus( bool isSigned );

		bool				beSigned( Bureaucrat& bureaucrat );
		void				testGradeRange( void );
		void				print( void );
		bool				execute( const Bureaucrat& executor ) const;
		virtual bool		execution( void ) const = 0;

	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_signed;
		std::string			_target;
};

std::ostream& operator<<( std::ostream& outstream, AForm const& form );

#endif
