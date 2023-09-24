/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:05:33 by yabad             #+#    #+#             */
/*   Updated: 2023/09/24 14:07:13 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

class Cure {
	public:
		Cure();
		Cure(const Cure&);
		~Cure();
		
		Cure& operator=(const Cure&);
};

#endif