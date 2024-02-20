/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:33:41 by abasante          #+#    #+#             */
/*   Updated: 2024/02/19 15:11:55 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const _name;
        bool _isSigned;
        int const _gts;
        int const _gte;
    public:
        AForm();
        AForm(std::string name, int gts, int gte);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& rhs);
        virtual ~AForm();
        std::string getName() const;
        bool getIsSigned() const;
        int getGTS() const;
		int getGTE() const;
        void beSigned(const Bureaucrat& src);
        virtual void execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too high";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too low";
				}
		};

        class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Form is not signed";
				}
		};
};

std::ostream& operator<<(std::ostream& o, AForm const& src);

#endif