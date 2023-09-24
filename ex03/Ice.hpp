/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:57:16 by yabad             #+#    #+#             */
/*   Updated: 2023/09/24 16:04:58 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice&);
		~Ice();
		
		Ice& operator=(const Ice&);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif