/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaList.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:45:10 by yabad             #+#    #+#             */
/*   Updated: 2023/09/28 19:07:49 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaList.hpp"

MateriaList::MateriaList() {
	this->head = NULL;
}

MateriaList::MateriaList(const MateriaList& other) {
	MateriaNode* current = other.head;
	
	this->head = NULL;
	while (current) {
		this->append(current->materia->clone());
		current = current->next;
	}
}

MateriaList::~MateriaList() {
	// std::cout << "Destructor called for list." << std::endl;
	MateriaNode* current = this->head;
	while (current) {
		MateriaNode* tmp = current;
		MateriaNode* init = current;
		current = current->next;
		delete tmp->materia;
		delete tmp;
		init->materia = NULL;
	}
}

MateriaList& MateriaList::operator=(const MateriaList& other) {
	if (this != &other) {
		while (this->head) {
			MateriaNode* tmp = head;
			head = head->next;
			delete tmp->materia;
			delete tmp;
		}
		MateriaNode* current = other.head;
		while (current) {
			this->append(current->materia->clone());
			current = current->next;
		}
	}
	return (*this);
}

void MateriaList::append(AMateria* m) {
	MateriaNode* newNode = new MateriaNode;
	newNode->materia = m;
	newNode->next = NULL;
	
	if (!head) {
		head = newNode;
	} else {
		MateriaNode* current = head;
		while (current->next) {
			current = current->next;
		}
		current->next = newNode;
	}
}
