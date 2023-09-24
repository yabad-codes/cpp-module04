/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:05:52 by yabad             #+#    #+#             */
/*   Updated: 2023/09/24 16:26:23 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other) {
	std::cout << "Ice copy constructor called." << std::endl;
	*this = other;
}

Ice::~Ice() {
	std::cout << "Ice destructor called." << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
	std::cout << "Ice copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}