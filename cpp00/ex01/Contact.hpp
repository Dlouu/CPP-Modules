/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:34:11 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/03/27 12:26:22 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <cctype>
# include <iomanip>

# define RED "\033[0;31m"
# define PUR "\033[0;34m"
# define YEL "\033[0;33m"
# define MAG "\033[0;35m"
# define BLU "\033[0;36m"
# define END "\033[m"

typedef enum e_info
{
	FIRST,
	LAST,
	NICKNAME,
	PHONE,
	SECRET
} e_info;

class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		Contact( void );
		~Contact( void );

		void		printContact( void );
		void		setContact( std::string input, e_info info );
		std::string	getContactInfo( e_info info );
};

#endif
