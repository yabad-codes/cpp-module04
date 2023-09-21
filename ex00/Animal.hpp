/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:23:58 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 20:20:37 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal&);
		virtual ~Animal();

		Animal&	operator=(const Animal&);
		
		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif