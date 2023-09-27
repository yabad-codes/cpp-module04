/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:27:37 by yabad             #+#    #+#             */
/*   Updated: 2023/09/27 17:42:08 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}