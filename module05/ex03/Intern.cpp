/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:21:04 by abasante          #+#    #+#             */
/*   Updated: 2024/02/21 13:35:10 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor called\n";
}

Intern::Intern(Intern const &other)
{
	*this = other;
    std::cout << "Intern copy constructor called\n";
}

Intern::~Intern(){
    std::cout << "Intern destructor called\n";
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return *this;
}

AForm*   Intern::makeForm(std::string name, std::string target) 
{
	int i;
	AForm* form;
	std::string formNames[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (i = 0; i < 3; i++) {
		if (formNames[i] == name)
			break;
	}
	switch (i) {
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
		default:
			std::cout <<  "Can't create that form\n";
			throw Intern::UnknownFormException();
	}
	std::cout <<  "Intern creates " << name << "\n";
	return (form);
}
