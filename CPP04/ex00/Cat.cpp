/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:28:55 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/09 18:52:07 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}