/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:48:59 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 19:50:02 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called." << std::endl;
	this->type = "Domestic WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound!" << std::endl;
}