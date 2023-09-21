/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:27:37 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 22:33:12 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constructor called." << std::endl;
	*this = other;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain;
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &other) {
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}