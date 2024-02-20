#ifndef	INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &other);
		~Intern();
		Intern &operator=(Intern const &other);
		AForm *makeForm(std::string name, std::string target);
		class UnknownFormException : public std::exception
		{
			public:
				virtual const char *what() const throw(){
                    return "Unknown Form";
                }
		};
};

#endif