/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:53:38 by yabad             #+#    #+#             */
/*   Updated: 2023/09/24 16:01:36 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called." << std::endl;
	this->type = "materia";
}

AMateria::AMateria(const AMateria& other) {
	std::cout << "AMateria copy constructor called." << std::endl;
	*this = other;
}

AMateria::AMateria(std::string const& type) {
	std::cout << "AMateria constructor with type called." << std::endl;
	this->type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
	std::cout << "AMateria assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string const& AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}