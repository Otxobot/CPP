/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:49:56 by abasante          #+#    #+#             */
/*   Updated: 2024/02/27 15:29:34 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Base.hpp"
// #include "A.hpp"
// #include "C.hpp"
// #include "B.hpp"

#include <cstdlib>
#include <iostream>
class Base
{
	public:
		virtual ~Base() {};
};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate()
{
    std::srand(std::time(0));

    int randomNum = std::rand() % 3;

	std::cout << randomNum << std::endl;

    switch (randomNum) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

void identify(Base *p)
{
	A* a = dynamic_cast<A*>(p);
	if (a != nullptr)
		std::cout << "El puntero es A\n";
	B* b = dynamic_cast<B*>(p);
	if (b != nullptr)
		std::cout << "El puntero es B\n";
	C* c = dynamic_cast<C*>(p);
	if (c != nullptr)
		std::cout << "El puntero es C\n";
}

void identify(Base &p)
{
	try{
		A& a = dynamic_cast<A&>(p);
		std::cout << "La referencia es A\n";
		(void)a;
	} catch (std::bad_cast){
		try{
			B& b = dynamic_cast<B&>(p);
			std::cout << "La referencia es B\n";
			(void)b;
		} catch (std::bad_cast){
			try{
				C& c = dynamic_cast<C&>(p);
				std::cout << "La referencia es C\n";
				(void)c;
			} catch (std::bad_cast){
				
			}
		}
	}
}

int main(void)
{
	Base *ptr;

	ptr = generate();

	identify(ptr);
	identify(*ptr);
}
