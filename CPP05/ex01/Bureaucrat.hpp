/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:11:48 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/15 18:30:38 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public :
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &src);
		void	setGrade(int num);
		void	upGrade();
		void	downGrade();
		std::string	getName() const;
		int		getGrade() const;
		void	signForm(Form &form);
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Grade is too low");
				}
		};
		class EmptyNameException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Name is empty");
				}
		};
	private:
		const std::string _name;
		int			_grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif