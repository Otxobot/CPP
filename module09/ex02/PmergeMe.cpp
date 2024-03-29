/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:48:41 by abasante          #+#    #+#             */
/*   Updated: 2024/03/29 16:48:43 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

}

PmergeMe::PmergeMe(const PmergeMe &obj){
    *this = obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{
		this->_vector = rhs._vector;
		this->_deque = rhs._deque;
	}
	return (*this);
}

PmergeMe::~PmergeMe(){

}

void PmergeMe::show_deque_before()
{
    std::deque<int>::iterator it = _deque.begin();
    std::deque<int>::iterator ite = _deque.end();

    std::cout << "Before: ";
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
}

void PmergeMe::show_vector_before()
{
    std::vector<int>::iterator it = _vector.begin();
    std::vector<int>::iterator ite = _vector.end();

    std::cout << "Before: ";
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
}

void PmergeMe::get_input(char **av)
{
    for (size_t i = 1; av[i]; i++)
    {
        std::string line = av[i];
        if (line.empty())
            return ;
        for (size_t a = 0; a < line.size(); a++)
        {
            if (!isdigit(av[i][a]))
                return ;
        }
        double number = static_cast<double>(atof(av[i]));
        if (number < 0 || number > 2147483647)
            return ;
        this->_vector.push_back(atoi(av[i]));
        this->_deque.push_back(atoi(av[i]));
    }
}
