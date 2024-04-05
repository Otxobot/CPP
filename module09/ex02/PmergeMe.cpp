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
	std::deque<int> deque1;
	std::deque<int> deque2;

    for (size_t i = 0; i < arr.size(); i++)
	{
		if (i % 2 == 0) 
		{
			deque1.push_back(arr[i]);
		}
		else
		{
			deque2.push_back(arr[i]);
		}
    }
	if (deque1.size() > 1)
    {
        mergeInsertionSort(deque1);
    }
    if (deque2.size() > 1)
    {
        mergeInsertionSort(deque2);
    }
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    while (i < deque1.size() && j < deque2.size())
    {
        if (deque1[i] < deque2[j])
        {
            arr[k++] = deque1[i++];
        }
        else
        {
            arr[k++] = deque2[j++];
        }
    }

    while (i < deque1.size())
    {
        arr[k++] = deque1[i++];
    }
    while (j < deque2.size())
    {
        arr[k++] = deque2[j++];
    }
    insertionSort(arr);
}

void PmergeMe::mergeInsertionSort(std::vector<int> &arr)
{
    std::vector<int> vector1;
	std::vector<int> vector2;
    for (size_t i = 0; i < arr.size(); i++)
	{
		if (i % 2 == 0) 
		{
			vector1.push_back(arr[i]);
		}
		else
		{
			vector2.push_back(arr[i]);
		}
    }
	if (vector1.size() > 1)
    {
        mergeInsertionSort(vector1);
    }
    if (vector2.size() > 1)
    {
        mergeInsertionSort(vector2);
    }

    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    while (i < vector1.size() && j < vector2.size())
    {
        if (vector1[i] < vector2[j])
        {
            arr[k++] = vector1[i++];
        }
        else
        {
            arr[k++] = vector2[j++];
        }
    }

    while (i < vector1.size())
    {
        arr[k++] = vector1[i++];
    }
    while (j < vector2.size())
    {
        arr[k++] = vector2[j++];
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
    this->show_vector_before();
    std::cout << std::endl;
	gettimeofday(&start, NULL);
	this->mergeInsertionSort(this->_vector);
	gettimeofday(&end, NULL);
    this->show_vector_after();
    std::cout << std::endl;

	long long time = (end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec);
	std::cout << "Time to process a range of "<< _vector.size() << " elements with std::vector : " << time << "us" << std::endl;
	gettimeofday(&start, NULL);
	this->mergeInsertionSort(this->_deque);
	gettimeofday(&end, NULL);
	time = (end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec);
	std::cout << "Time to process a range of "<< _deque.size() << " elements with std::deque : " << time << "us" << std::endl;
}
