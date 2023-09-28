/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:00:55 by yabad             #+#    #+#             */
/*   Updated: 2023/09/28 22:33:54 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Animal**	create_animals(const int size) {
	Animal**	animals = new Animal*[size];
	for (int i = 0; i < size; i++) {
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	return (animals);
}

int	main() {
	Animal**	animals;

	animals = create_animals(2);
	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}
	delete [] animals;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	Dog dog1;
	Dog dog2;

	dog1 = dog2;
	system("leaks animal");
	j->makeSound();
	i->makeSound();
	delete i;
	delete j;
	return (0);
}