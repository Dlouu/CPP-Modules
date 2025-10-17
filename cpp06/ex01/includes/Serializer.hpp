/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:04:46 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/09/29 16:28:01 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

typedef unsigned long uintptr_t;

typedef struct s_data {
	int		i;
	char	c;
} Data;

class Serializer {
	public:	
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

	private:
		Serializer( void );
		Serializer( Serializer const& other );
		~Serializer( void );
		Serializer& operator=( Serializer const& other );
};

#endif
