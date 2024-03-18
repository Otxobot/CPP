/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:50:42 by abasante          #+#    #+#             */
/*   Updated: 2024/03/18 17:16:12 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "=======================MutantStack=========================" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    int a = 0;
    while (it != ite)
    {
        a++;
        std::cout << a << "->" << *it << std::endl;
        ++it;
    }
    MutantStack<int> s(mstack);

    std::cout << "=======================std::list=========================" << std::endl;

    std::list<int> intList;
		intList.push_back(5);
		intList.push_back(17);
		std::cout << "la ultima: " << intList.back() << std::endl;
		intList.pop_back();
		std::cout << "size: " <<intList.size() << std::endl;
		intList.push_back(3);
		intList.push_back(5);
		intList.push_back(737);
		//[...]
		intList.push_back(0);
		std::list<int>::iterator iterador1 = intList.begin();
		std::list<int>::iterator iterador2 = intList.end();
        int b = 0;
		while (iterador1 != iterador2)
		{
            b++;
			std::cout << b << "->" << *iterador1 << std::endl;
			++iterador1;
		}
    return (0);
}
