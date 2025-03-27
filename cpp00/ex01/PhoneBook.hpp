/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:34:11 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 12:20:19 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <cctype>
# include "Contact.hpp"

class	PhoneBook 
{
	private:
		Contact	_contacts[8];
		int		_total;
		int		_index;
		int		_eof;

		void	headerTable( void );
		void	emptyTable( void );
		void	footerTable( void );
		int		isPrintable( std::string str );

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void	addCommand( void );
		void	searchCommand( void );
		void	setEof( int eof );
		int		getEof( void );
};

#endif
