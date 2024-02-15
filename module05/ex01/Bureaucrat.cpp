/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:25:03 by abasante          #+#    #+#             */
/*   Updated: 2024/02/14 15:51:09 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
	std::cout << "DEFAULT bureaucrat constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "PARAMETER bureaucrat constructor called\n";
	if (grade >= 150)
		throw GradeTooLowException();
	else if (grade <= 0)
		throw GradeTooHighException();
	this->_grade = grade;	
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	std::cout << "COPY constructor called\n";
	*this = obj;	
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "DESTRUCTOR bureaucrat called\n";
}

std::string Bureaucrat::getName() const
{
	return (this->_name);	
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade() 
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade() 
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs ) 
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}


void Bureaucrat::signForm(Form& src)
{
	if (this->_grade > src.getGTS())
			throw Bureaucrat::GradeTooLowException();
	else
	{
			src.beSigned(*this);
			std::cout << this->_name << " signs " << src.getName() << std::endl;
	}
}