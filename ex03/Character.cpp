/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:04:09 by yabad             #+#    #+#             */
/*   Updated: 2023/09/27 16:29:03 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	this->name = "random";
	for (int i = 0; i < 4; i++) {
		this->materias[i] = NULL;
	}
	std::cout << "Character with name : " << this->name << " created with default constructor." << std::endl;
}

Character::Character(std::string const& name) {
	this->name = name;
	for (int i = 0; i < 4; i++) {
		this->materias[i] = nullptr;
	}
	std::cout << "Character with name : " << this->name << " created with a constructor." << std::endl;
}

Character::Character(const Character& other) {
	this->name = other.name;
	for (int i = 0; i < 4; i++) {
		if (other.materias[i])
			this->materias[i] = other.materias[i]->clone();
		else
			this->materias[i] = nullptr;
	}
	std::cout << "Character with name : " << this->name << " created with the copy constructor." << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->materias[i])
			delete this->materias[i];
	}
	std::cout << "Character with name : " << this->name << " destroyed." << std::endl;
}

Character& Character::operator=(const Character& other) {
	if (this != &other) {
		this->name = other.name;
		for (int i = 0; i < 4; i++) {
			if (this->materias[i])
				delete this->materias[i];
			if (other.materias[i])
				this->materias[i] = other.materias[i]->clone();
			else
				this->materias[i] = nullptr;
		}
	}
	std::cout << "Character with name : " << this->name << " created with the copy assignment operator." << std::endl;
	return (*this);
}

std::string const& Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->materias[i] == nullptr) {
			this->materias[i] = m;
			std::cout << "Character : " << this->name << " equipped with " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Character : " << this->name << " can't be equipped." << std::endl;
}

void Character::unequip(int idx) {
	if (this->materias[idx]) {
		delete this->materias[idx];
		std::cout << "Character : " << this->name << " unequipped." << std::endl;
		return ;
	}
	std::cout << "Character : " << this->name << " can't be unequipped." << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (this->materias[idx]) {
		this->materias[idx]->use(target);
		std::cout << "Character : " << this->name << " uses " << this->materias[idx]->getType() << std::endl;
		return ;
	}
	std::cout << "Character : " << this->name << " can't use materias." << std::endl;
}