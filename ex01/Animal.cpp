/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:31:02 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 19:39:38 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called." << std::endl;
	this->type = "Domestic Animal";
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = other;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	std::cout << "Animal sound!" << std::endl;
}