/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:06:51 by abasante          #+#    #+#             */
/*   Updated: 2024/03/04 16:27:42 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

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
		// T & operator[](unsigned int i)
		// {
		// 	try{
		// 		if (i >= _size)
		// 			throw std::exception();
		// 		return _array[i];
		// 	}
		// 	catch(const std::exception& e)
		// 	{
		// 		std::cout << "Index out of range" << std::endl;
		// 		return _array[0];
		// 	}
		// }
		T& operator[]( unsigned int i ) const
		{
        	if ( i >= _size )
            	throw OutOfBoundsException();
        	return _array[i];
    	}
		~Array()
		{
			delete[] _array;
		}
		
		unsigned int size() const
		{
			return (_size);
		}
		class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Index is out of bounds";}
    };
};

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& arr ) {
    for ( unsigned int i( 0 ); i < arr._size(); i++ )
        out << arr[i] << " ";
    return out;
}

#endif