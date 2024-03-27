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

        void get_input(char **av);
        void show_vector_before();
        void show_deque_before();
};

#endif