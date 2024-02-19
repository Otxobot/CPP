/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:34:07 by abasante          #+#    #+#             */
/*   Updated: 2024/02/19 17:05:11 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
		~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm& rhs);

        std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif