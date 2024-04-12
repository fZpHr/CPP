/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:11:45 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/12 20:14:18 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (name.empty())
		throw Bureaucrat::EmptyNameException();
	this->_name = name;
	this->_grade = grade;
	std::cout << "Constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Constructor copy Bureaucrat called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Deconstructor Bureaucrat called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_grade = src._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

void Bureaucrat::setGrade(int num)
{
	if (num < 1)
		throw Bureaucrat::GradeTooHighException();
	if (num > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = num;
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::upGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::downGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}

