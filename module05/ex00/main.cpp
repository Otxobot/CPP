/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:25:05 by abasante          #+#    #+#             */
/*   Updated: 2024/02/21 11:28:08 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
    Bureaucrat bureaucrat("ash", 1);

    std::cout << bureaucrat << std::endl;

    bureaucrat.incrementGrade();
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "================================\n";
    try{
    Bureaucrat bureaucrat1("ley", 150);

    std::cout << bureaucrat1 << std::endl;

    bureaucrat1.decrementGrade();
    } catch (Bureaucrat::GradeTooLowException &a){
        std::cout << a.what() << std::endl;
    }
    return 0;
}
