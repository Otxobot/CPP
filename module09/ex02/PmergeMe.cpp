/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:48:41 by abasante          #+#    #+#             */
/*   Updated: 2024/04/01 15:01:35 by abasante         ###   ########.fr       */
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
        size_t a = 0;
        for (; a < line.size(); a++)
        {
            if (!isdigit(av[i][a]))
            {
                std::cout << "Error: invalid input" << std::endl;
                exit(1);
            }
        }
        double number = static_cast<double>(atof(av[i]));
        if (number < 0 || number > 2147483647)
        {
            std::cout << "Error: value not in range" << std::endl;
            exit(1);
        }
        if (std::find(this->_vector.begin(), this->_vector.end(), static_cast<int>(number)) != this->_vector.end())
        {
		    std::cout << "Error: duplicate value" << std::endl;
		    exit(1);
	    }
        this->_vector.push_back(atoi(av[i]));
        this->_deque.push_back(atoi(av[i]));
    }
}

void PmergeMe::main_one(char **av)
{
    this->get_input(av);
    this->show_deque_before();
    std::cout << std::endl;
    this->show_vector_before();
}
