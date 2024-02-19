/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:33:34 by abasante          #+#    #+#             */
/*   Updated: 2024/02/19 16:31:20 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("ash", 2); // error with 200
        ShrubberyCreationForm form1("Shrubbery");
        //RobotomyRequestForm form2("Robotomy");
        //PresidentialPardonForm form3("President");

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
        bureaucrat.signForm(form1);
        form1.execute(bureaucrat);
        // std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
        // bureaucrat.signForm(form2);
        // bureaucrat.executeForm(form2);
        // bureaucrat.executeForm(form2);
        // bureaucrat.executeForm(form2);
        // bureaucrat.executeForm(form2);
        // std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
        // bureaucrat.signForm(form3);
        // bureaucrat.executeForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
