/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:53:30 by abasante          #+#    #+#             */
/*   Updated: 2024/01/22 17:01:02 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) 
{
	if (ac == 1)
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  	else 
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
			if (i < ac - 1)
				std::cout << ' ';
		}
  	}
	std::cout << std::endl;
  	return 0;
}
