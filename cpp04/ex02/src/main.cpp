/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:25:38 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/07 16:39:51 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	// const AAnimal notPossible;
	delete j;
	delete i;
	return 0;
}
