/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:54:43 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/09 14:21:21 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(AAnimal const &src);
		AAnimal(std::string type);
		AAnimal &operator=(const AAnimal &src);
		
		std::string getType() const;
		virtual void makeSound() const = 0;
	protected:
		std::string _type;
};

#endif