/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:37:35 by hbelle            #+#    #+#             */
/*   Updated: 2024/04/25 19:07:34 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

template<typename T>
int	easyfind(T lst, int target)
{
	typename T::iterator it = std::find(lst.begin(), lst.end(), target);
	if (it != lst.end())	
		return (target);
	throw std::runtime_error ("Target not found");
}

#endif