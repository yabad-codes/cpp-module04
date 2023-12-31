/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:03:30 by yabad             #+#    #+#             */
/*   Updated: 2023/09/27 17:32:33 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const&);
		AMateria(const AMateria&);
		virtual ~AMateria();
		
		AMateria& operator=(const AMateria&);
		
		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter&);
};

#endif