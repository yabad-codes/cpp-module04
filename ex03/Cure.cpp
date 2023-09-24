/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:28:55 by yabad             #+#    #+#             */
/*   Updated: 2023/09/24 16:49:39 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	std::cout << "Cure copy constructor called." << std::endl;
	*this = other;
}

Cure::~Cure() {
	std::cout << "Cure destructor called." << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	std::cout << "Cure copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}