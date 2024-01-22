/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:17:05 by abasante          #+#    #+#             */
/*   Updated: 2024/01/22 16:32:34 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 5

int main(void)
{
	Zombie *ptr = zombieHorde(N, "creeper");

	for(int i = 0; i < N; i++)
	{
		ptr[i].announce();
	}
	delete [] ptr;
	return 0;
}
