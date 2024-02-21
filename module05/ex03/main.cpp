/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:33:34 by abasante          #+#    #+#             */
/*   Updated: 2024/02/21 13:41:41 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try{    
    Intern  someRandomIntern;
    AForm*   rrf;

    rrf = someRandomIntern.makeForm("shrubberry creation", "Bender");
    std::cout << "name de rrf-> " << rrf->getName() << std::endl;
    delete rrf;
    std::cout << "====================================================================\n";
    rrf = someRandomIntern.makeForm("presidential pardon", "hello");
    std::cout << "name de rrf despues de otro makeform-----> " << rrf->getName() << std::endl;
    delete rrf;
    } catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
