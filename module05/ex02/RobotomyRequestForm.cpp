/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:34:04 by abasante          #+#    #+#             */
/*   Updated: 2024/02/19 17:09:02 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
    std::cout << "RobotomyRequestForm DEFAULT constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm PARAMETER constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm("RobotomyRequestForm", 72, 45), target(obj.target)
{
    std::cout << "RobotomyRequestForm COPY constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm DESTRUCTOR called\n";
}

std::string RobotomyRequestForm::getTarget() const{
	return (this->target);
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		this->target = rhs.getTarget();
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw AForm::GradeTooLowException();
	else if (executor.getGrade() > this->getGTE())
		throw AForm::GradeTooLowException();
	else {
        static int  i;
        if ( i % 2 == 0 )
            std::cout << "BZZZZZT! " << target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << target << " is still alive." << std::endl;
        i++;
    }
}
