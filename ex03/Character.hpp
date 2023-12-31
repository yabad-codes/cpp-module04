/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:57:27 by yabad             #+#    #+#             */
/*   Updated: 2023/09/28 16:20:18 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "MateriaList.hpp"

class Character : public ICharacter {
	private:
		std::string	name;
		AMateria*	materias[4];
		MateriaList	equippedMaterias;
	public:
		Character();
		Character(std::string const&);
		Character(const Character&);
		~Character();
		
		Character& operator=(const Character&);
		
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif