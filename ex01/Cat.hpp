/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:26:28 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 20:44:22 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain*	brain;
	public:
		Cat();
		Cat(const Cat&);
		~Cat();

		Cat&	operator=(const Cat&);
		void	makeSound() const;
};

#endif