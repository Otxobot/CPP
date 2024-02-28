/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:49:12 by abasante          #+#    #+#             */
/*   Updated: 2024/02/27 13:49:16 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data {
	int i;
};

class Serializer
{
    private:
		Serializer();
		Serializer(const Serializer& obj);
		Serializer& operator=(const Serializer& rhs);
    public:
		~Serializer();
		static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif