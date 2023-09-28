/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:27:46 by yabad             #+#    #+#             */
/*   Updated: 2023/09/28 17:48:04 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	Character* me = new Character("yabad");
	Character* her = new Character("houattou");
	
	IMateriaSource* src = new MateriaSource();

	src->createMateria("ice");
	me->use(0, *her);
	return 0;
}