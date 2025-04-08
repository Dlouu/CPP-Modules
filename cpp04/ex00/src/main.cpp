/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:25:38 by mbaumgar          #+#    #+#             */
/*   Updated: 2025/04/07 16:39:13 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}
	{
		std::cout << std::endl;
		std::cout << RED "WrongCat TESTS" END << std::endl;	
		const WrongAnimal* metaWrong = new WrongAnimal();
		const WrongAnimal* iWrong = new WrongCat();
		std::cout << iWrong->getType() << " " << std::endl;
		iWrong->makeSound(); //will output the cat sound!
		metaWrong->makeSound();
		delete iWrong;
		delete metaWrong;
	}
	{
		std::cout << std::endl;
		std::cout << RED "ADDITIONAL TESTS" END << std::endl;
		const Animal temp;
		Animal copyequal;
		copyequal = temp;
		copyequal.makeSound();
		const Animal* copycon = new Animal(copyequal);
		copycon->makeSound();
		delete copycon;
	}
	return 0;
}
