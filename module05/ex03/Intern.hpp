/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:21:10 by abasante          #+#    #+#             */
/*   Updated: 2024/02/21 13:42:19 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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