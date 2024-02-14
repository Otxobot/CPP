/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:25:00 by abasante          #+#    #+#             */
/*   Updated: 2024/02/14 13:31:49 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat(std::string& name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=( const Bureaucrat& rhs );
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		
};

#endif