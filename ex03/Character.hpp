/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:02:27 by yabad             #+#    #+#             */
/*   Updated: 2023/09/24 17:12:30 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string name;
		AMateria*	inventory[4];	
	public:
		Character();
		Character(const Character&);
		Character(std::string const&);
		~Character();
		
		Character& operator=(const Character&);

		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif