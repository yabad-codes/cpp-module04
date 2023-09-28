/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaList.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:37:42 by yabad             #+#    #+#             */
/*   Updated: 2023/09/28 17:35:01 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIANODE_HPP

# define MATERIANODE_HPP
# include <iostream>
# include "AMateria.hpp"

typedef struct s_materia {
	AMateria*			materia;
	struct s_materia*	next;
} MateriaNode;

class MateriaList {
	private:
		MateriaNode*	head;
	public:
		MateriaList();
		MateriaList(const MateriaList&);
		~MateriaList();
		
		MateriaList& operator=(const MateriaList&);
		void append(AMateria* m);
};

#endif