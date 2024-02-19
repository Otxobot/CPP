/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:33:59 by abasante          #+#    #+#             */
/*   Updated: 2024/02/19 17:15:03 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
    std::cout << "PresidentialPardonForm DEFAULT constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "PresidentialPardonForm PARAMETER constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm("PresidentialPardonForm", 25, 5), target(obj.target)
{
    std::cout << "PresidentialPardonForm COPY constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm DESTRUCTOR called\n";
}

std::string PresidentialPardonForm::getTarget() const{
	return (this->target);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		this->target = rhs.getTarget();
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw AForm::GradeTooLowException();
	else if (executor.getGrade() > this->getGTE())
		throw AForm::GradeTooLowException();
	else {
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}
