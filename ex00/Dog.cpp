/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:27:23 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 19:40:06 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor called." << std::endl;
	*this = other;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}