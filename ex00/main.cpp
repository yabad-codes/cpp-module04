/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:00:55 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 20:24:33 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main() {
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;

	std::cout << "***************************************" << std::endl;

	const WrongAnimal*	_meta = new WrongAnimal();
	const WrongAnimal*	_j = new WrongDog();
	const WrongAnimal*	_i = new WrongCat();
	
	std::cout << _j->getType() << " " << std::endl;
	std::cout << _i->getType() << " " << std::endl;
	_i->makeSound();
	_j->makeSound();
	_meta->makeSound();
	
	delete _meta;
	delete _j;
	delete _i;
	
	return (0);
}