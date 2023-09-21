/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:53:20 by yabad             #+#    #+#             */
/*   Updated: 2023/09/21 19:54:41 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
	public:
		WrongDog();
		WrongDog(const WrongDog&);
		~WrongDog();

		WrongDog&	operator=(const WrongDog&);
		void	makeSound() const;
};

#endif