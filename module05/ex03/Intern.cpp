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

    std::string formNames[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm* form;

    for (int i = 0; i < 3; i++) 
    {
        if (name == formNames[i]) 
        {
            if (name == "robotomy request")
                form = new RobotomyRequestForm(target);
            else if (name == "presidential pardon")
                form = new PresidentialPardonForm(target);
            else if (name == "shrubbery creation")
                form = new ShrubberyCreationForm(target);
            std::cout << "Intern creates " << name << std::endl;
            return form;
        }
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return 0;
}
