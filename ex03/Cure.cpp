/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:47:55 by yabad             #+#    #+#             */
/*   Updated: 2023/09/28 19:07:21 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	// std::cout << "Default constructor called for Cure." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	// std::cout << "Copy constructor called for Cure." << std::endl;
}

Cure::~Cure() {
	// std::cout << "Destructor called for Cure." << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	// std::cout << "Copy assignment operator called for Cure." << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}