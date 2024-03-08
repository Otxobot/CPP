/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:06:49 by abasante          #+#    #+#             */
/*   Updated: 2024/03/08 12:53:23 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


// #define SIZE 10

// int main(void)
// {
// 	std::cout << "-----------------------------------------------------" << std::endl;

//     Array<float> test;

//     Array<int> intArray(SIZE);
//     Array<int> intArray2(SIZE - 5);

//     for (unsigned int i = 0; i < intArray.size(); i++)
//         intArray[i] = i * 2;

//     std::cout << "Int Array 1: " << intArray << std::endl;

//     intArray2 = intArray;

//     std::cout << "int Array 2: " << intArray2 << std::endl;

//     try {
//         std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
//         std::cout << "Accessing an invalid index: " << intArray[SIZE] << std::endl;
//         //std::cout << "Accessing an invalid index: " << intArray[SIZE - 1] << std::endl;
//     } catch ( Array< int >::OutOfBoundsException& e ) {
//         std::cout << "Error: " << e.what() << std::endl;
//     }

//     std::cout << "-----------------------------------------------------" << std::endl;

//     return ( 0 );
// }

#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}