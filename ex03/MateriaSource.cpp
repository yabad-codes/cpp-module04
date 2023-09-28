/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:04:30 by yabad             #+#    #+#             */
/*   Updated: 2023/09/28 16:18:12 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	// std::cout << "Default constructor called for MateriaSource." << std::endl;
	for (int i = 0; i < 4; i++) {
		this->materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	// std::cout << "Copy constructor called for MateriaSource." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	// std::cout << "Destructor called for MateriaSource." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->materias[i])
			delete this->materias[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	// std::cout << "Copy assignment operator called for MateriaSource." << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->materias[i])
			delete this->materias[i];
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->materias[i] == NULL) {
			this->materias[i] = m;
			// std::cout << "MateriaSource learned " << m->getType() << std::endl;
			return ;
		}
	}
	// std::cout << "MateriaSource can't learn " << m->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; i++) {
		if (this->materias[i] && this->materias[i]->getType() == type) {
			return (this->materias[i]->clone());
		}
	}
	return (NULL);
}