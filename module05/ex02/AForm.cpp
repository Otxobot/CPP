/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:33:47 by abasante          #+#    #+#             */
/*   Updated: 2024/02/19 15:43:54 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(0), _gts(150), _gte(150) {
    std::cout << "DEFAULT Aform constructor called\n";
}

AForm::AForm(std::string name, int gts, int gte) : _name(name), _isSigned(0), _gts(gts), _gte(gte) {
    std::cout << "PARAMETER AForm constructor called\n";
    if (gts < 1 || gte < 1)
		throw GradeTooHighException();
	else if (gts > 150 || gte > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& obj) : _name(obj._name), _isSigned(obj._isSigned), _gts(obj._gts), _gte(obj._gte) {
    std::cout << "COPY Aform constructor called\n";
    *this = obj;
}

AForm& AForm::operator=(const AForm& rhs)
{
    if (this != &rhs)
    {
        this->_isSigned = rhs._isSigned;
    }
    return (*this);
}

AForm::~AForm(){
    std::cout << "AForm destructor called\n";
}

std::string AForm::getName() const{
    return (this->_name);
}

bool AForm::getIsSigned() const{
    return (this->_isSigned);
}

int AForm::getGTS() const{
    return (this->_gts);
}

int AForm::getGTE() const{
    return (this->_gte);
}

void AForm::beSigned(const Bureaucrat& src)
{
    if (src.getGrade() > this->_gts)
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}

std::ostream & operator<<(std::ostream & o, AForm const & src){
	o << "AForm " << src.getName() << " is signed: " << src.getIsSigned() << ", grade to sign: " << src.getGTS() << ", grade to execute: " << src.getGTE() << std::endl;
	return o;
}
