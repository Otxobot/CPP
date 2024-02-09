/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:55:15 by abasante          #+#    #+#             */
/*   Updated: 2024/02/09 09:55:17 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &rhs);
		~Cat();
		void makeSound() const;
};

#endif