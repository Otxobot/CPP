/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:34:13 by abasante          #+#    #+#             */
/*   Updated: 2024/02/19 15:36:36 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
    std::cout << "ShrubberyCreationForm DEFAULT constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm PARAMETER constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), target(obj.target)
{
    std::cout << "ShrubberyCreationForm COPY constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm DESTRUCTOR called\n";
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		this->target = rhs.getTarget();
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGTE())
		throw AForm::GradeTooLowException();
	else
	{
		std::string filename = this->target + "_shrubbery";
		std::ofstream ofs(filename.c_str());
		if (ofs.is_open())
		{
			ofs << "          v" << std::endl;
			ofs << "         >X<" << std::endl;
			ofs << "          A" << std::endl;
			ofs << "         d$b" << std::endl;
			ofs << "        d$$b" << std::endl;
			ofs << "       d$$$b" << std::endl;
			ofs << "      d$$$$$b" << std::endl;
			ofs << "     d$$$$$$$b" << std::endl;
			ofs << "    d$$$$$$$$$b" << std::endl;
			ofs << "   d$$$$$$$$$$$b" << std::endl;
			ofs << "  d$$$$$$$$$$$$$b" << std::endl;
			ofs << " d$$$$$$$$$$$$$$$b" << std::endl;
			ofs << "d$$$$$$$$$$$$$$$$$b" << std::endl;
			ofs << "       d$$P" << std::endl;
			ofs << "      d$$P" << std::endl;
		}
		ofs.close();
	}
}
