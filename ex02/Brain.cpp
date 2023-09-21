/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:36:50 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 20:43:28 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "Fooooooood";
	}
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = other;
}

Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
}

Brain&	Brain::operator=(const Brain& other) {
	std::cout << "Brain copy assignment operator called." << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}