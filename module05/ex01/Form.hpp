#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool _isSigned;
        int const _gts;
        int const _gte;
    public:
        Form();
        Form(std::string name, int gts, int gte);
        Form(const Form& obj);
        Form& operator=(const Form& rhs);
        ~Form();
        std::string getName() const;
        bool getIsSigned() const;
        int getGTS() const;
		int getGTE() const;
        void beSigned(const Bureaucrat& src);

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
};

std::ostream& operator<<(std::ostream& o, Form const& src);

#endif