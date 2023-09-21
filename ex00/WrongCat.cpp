/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:50:49 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 19:52:24 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = other;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}