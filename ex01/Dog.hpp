/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:25:34 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 20:45:14 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain*	brain;
	public:
		Dog();
		Dog(const Dog&);
		~Dog();

		Dog&	operator=(const Dog&);
		void	makeSound() const;
};

#endif