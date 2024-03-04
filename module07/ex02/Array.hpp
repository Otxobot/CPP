/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:06:51 by abasante          #+#    #+#             */
/*   Updated: 2024/03/04 15:31:59 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() : Array(new T[0]), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(Array const &rhs) : _array(new T[rhs._size]), _size(rhs._size) {}
		Array & operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				delete _array;
				_array = new T[rhs._size];
				_size = rhs._size;
				for (int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		}
		T & operator[](int i)
		{
			try{
				if (i >= length)
					throw std::exception();
				return array[i];
			}
			catch(const std::exception& e)
			{
				std::cout << "Index out of range" << std::endl;
				return array[0];
			}
		}
		~Array()
		{
			delete[] array;
		}
		
		unsigned int size() const;
		{
			return (_size);
		}
};

#endif