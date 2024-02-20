/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:33:34 by abasante          #+#    #+#             */
/*   Updated: 2024/02/19 17:10:30 by abasante         ###   ########.fr       */
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
    Intern  someRandomIntern;
    AForm*   rrf;

    // rrf = someRandomIntern.makeForm("robotomy", "Bender");
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << "lets see.-----> " << rrf->getName() << std::endl;
    delete rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "hello");
    std::cout << "lets see NOW-----> " << rrf->getName() << std::endl;
    delete rrf;
    return 0;
}
