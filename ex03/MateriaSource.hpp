/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:00:47 by yabad             #+#    #+#             */
/*   Updated: 2023/09/27 17:08:51 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		~MateriaSource();
		
		MateriaSource& operator=(const MateriaSource&);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const&);
};

#endif