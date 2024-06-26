/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:04:17 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/11 15:16:21 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}


Character::Character(Character const &src)
{
	std::cout << "Character constructor copy called" << std::endl;
	*this = src;
}

Character &Character::operator=(Character const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = src._inventory[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break;
		}
		else if (i == 3)
		{
			delete m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "System: Invalid slot" << std::endl;
		return ;
	}
	if (!this->_inventory[idx])
	{
		std::cout << "System: No materia in this slot" << std::endl;
		return ;
	}
	if (idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
}

AMateria *Character::getInventory(int idx) const
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "System: Invalid slot" << std::endl;
		return(NULL);
	}
	if (!this->_inventory[idx])
	{
		std::cout << "System: No materia in this slot" << std::endl;
		return(NULL);
	}
	if (idx >= 0 && idx < 4)
		return (this->_inventory[idx]);
	return (NULL);
}