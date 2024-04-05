/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:48:41 by abasante          #+#    #+#             */
/*   Updated: 2024/04/04 18:11:35 by abasante         ###   ########.fr       */
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

void PmergeMe::show_vector_after()
{
    std::vector<int>::iterator it = _vector.begin();
    std::vector<int>::iterator ite = _vector.end();

    std::cout << "After: ";
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
        // if (std::find(this->_vector.begin(), this->_vector.end(), static_cast<int>(number)) != this->_vector.end())
        // {
		//     std::cout << "Error: duplicate value" << std::endl;
		//     exit(1);
	    // }
        this->_vector.push_back(atoi(av[i]));
        this->_deque.push_back(atoi(av[i]));
    }
}

void	PmergeMe::insertionSort(std::deque<int> &arr)
{
	for (size_t i = 1; i < arr.size(); i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void	PmergeMe::insertionSort(std::vector<int> &arr)
{
	for (size_t i = 1; i < arr.size(); i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void PmergeMe::mergeInsertionSort(std::deque<int> &arr)
{
	std::deque<int> u;
	std::deque<int> v;

    for (size_t i = 0; i < arr.size(); i++)
	{
		if (i % 2 == 0) 
		{
			u.push_back(arr[i]);
		}
		else
		{
			v.push_back(arr[i]);
		}
    }
	if (u.size() > 1)
    {
        mergeInsertionSort(u);
    }
    if (v.size() > 1)
    {
        mergeInsertionSort(v);
    }
    size_t i = 0, j = 0, k = 0;
    while (i < u.size() && j < v.size())
    {
        if (u[i] < v[j])
        {
            arr[k++] = u[i++];
        }
        else
        {
            arr[k++] = v[j++];
        }
    }

    while (i < u.size())
    {
        arr[k++] = u[i++];
    }
    while (j < v.size())
    {
        arr[k++] = v[j++];
    }
    insertionSort(arr);
}

void PmergeMe::mergeInsertionSort(std::vector<int> &arr)
{
    std::vector<int> u;
	std::vector<int> v;
    for (size_t i = 0; i < arr.size(); i++)
	{
		if (i % 2 == 0) 
		{
			u.push_back(arr[i]);
		}
		else
		{
			v.push_back(arr[i]);
		}
    }
	if (u.size() > 1)
    {
        mergeInsertionSort(u);
    }
    if (v.size() > 1)
    {
        mergeInsertionSort(v);
    }
    size_t i = 0, j = 0, k = 0;
    while (i < u.size() && j < v.size())
    {
        if (u[i] < v[j])
        {
            arr[k++] = u[i++];
        }
        else
        {
            arr[k++] = v[j++];
        }
    }

    while (i < u.size())
    {
        arr[k++] = u[i++];
    }
    while (j < v.size())
    {
        arr[k++] = v[j++];
    }
    insertionSort(arr);
}

void PmergeMe::main_one(char **av)
{
    this->get_input(av);
    if (this->_vector.size() < 2)
	{
		std::cout << RED << "Error: invalid input" << std::endl;
		exit(1);
	}

	struct timeval start;
    struct timeval end;
	gettimeofday(&start, NULL);
	this->mergeInsertionSort(this->_vector);
	gettimeofday(&end, NULL);
    this->show_vector_after();
    std::cout << std::endl;

	long long time = (end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec);
	std::cout << "Time it took to sort vector container: " << time << "us" << std::endl;
	gettimeofday(&start, NULL);
	this->mergeInsertionSort(this->_deque);
	gettimeofday(&end, NULL);
	time = (end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec);
	std::cout << "Time it took to sort deque container: " << time << "us" << std::endl;
}
