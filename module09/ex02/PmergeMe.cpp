/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:48:41 by abasante          #+#    #+#             */
/*   Updated: 2024/04/04 14:34:30 by abasante         ###   ########.fr       */
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
        if (std::find(this->_vector.begin(), this->_vector.end(), static_cast<int>(number)) != this->_vector.end())
        {
		    std::cout << "Error: duplicate value" << std::endl;
		    exit(1);
	    }
        this->_vector.push_back(atoi(av[i]));
        this->_deque.push_back(atoi(av[i]));
    }
}

// Function to perform insertion sort
void PmergeMe::insertionSort(std::vector<int>& arr, int start, int end) {
    for (int i = start + 1; i <= end; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= start && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to merge two sorted subarrays
void PmergeMe::merge(std::vector<int>& arr, int l, int m, int r) 
{
    int n1 = m - l + 1;
    int n2 = r - m;

    std::vector<int> L(n1);
    std::vector<int> R(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to perform merge-insertion sort
void PmergeMe::mergeInsertionSort(std::vector<int>& arr, int l, int r, int k) {
    if (l < r) {
        if (r - l <= k) { // Perform insertion sort for small subarrays
            insertionSort(arr, l, r);
        } else {
            int m = l + (r - l) / 2;
            mergeInsertionSort(arr, l, m, k);
            mergeInsertionSort(arr, m + 1, r, k);
            merge(arr, l, m, r);
        }
    }
}

void PmergeMe::main_one(char **av)
{
    this->get_input(av);
    this->show_deque_before();
    std::cout << std::endl;
    this->show_vector_before();
    this->mergeInsertionSort(this->_vector, 0, this->_vector.size() - 1, 5);
    std::cout << std::endl;
    this->show_vector_after();
}
