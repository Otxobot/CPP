/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:48:32 by abasante          #+#    #+#             */
/*   Updated: 2024/03/29 16:48:34 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error: At least two arguments" << std::endl;
    }
    PmergeMe mergeinsert;
    mergeinsert.get_input(av);
    mergeinsert.show_deque_before();
    std::cout << std::endl;
    mergeinsert.show_vector_before();

}
