/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:23:50 by yabad             #+#    #+#             */
/*   Updated: 2023/09/27 17:35:44 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "Default constructor called for Ice." << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other) {
	// std::cout << "Copy constructor called for Ice." << std::endl;
}

Ice::~Ice() {
	// std::cout << "Destructor called for Ice." << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
	// std::cout << "Copy assignment operator called for Ice." << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}