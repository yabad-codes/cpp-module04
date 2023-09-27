/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:17:55 by yabad             #+#    #+#             */
/*   Updated: 2023/09/27 15:23:22 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Default constructor called for AMateria." << std::endl;
	this->type = "random";
}

AMateria::AMateria(std::string const& type) {
	std::cout << "A constructor with type called for AMateria." << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& other) {
	std::cout << "Copy constructor called for AMateria." << std::endl;
	*this = other;
}

AMateria::~AMateria() {
	std::cout << "Destructor called for AMateria." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
	std::cout << "Copy assignment operator called for AMateria." << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

std::string const& AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}