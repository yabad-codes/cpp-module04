/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:54:20 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 19:54:30 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() {
	std::cout << "WrongDog default constructor called." << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog& other) {
	std::cout << "WrongDog copy constructor called." << std::endl;
	*this = other;
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called." << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog& other) {
	std::cout << "WrongDog copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	WrongDog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}