/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:48:46 by abasante          #+#    #+#             */
/*   Updated: 2024/04/04 14:34:00 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <cmath>

class PmergeMe
{
    private:
        std::vector<int> _vector;
        std::deque<int>  _deque;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &obj);
		PmergeMe &operator=(const PmergeMe &rhs);
		~PmergeMe();

        //main func:
        void main_one(char **av);
        void get_input(char **av);
        void show_vector_before();
        void show_vector_after();
        void show_deque_before();
        
        void mergeInsertionSort(std::vector<int>& arr, int l, int r, int k);
        void merge(std::vector<int>& arr, int l, int m, int r);
        void insertionSort(std::vector<int>& arr, int start, int end);
};

#endif