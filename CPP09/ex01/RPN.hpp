/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:04:00 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/06 17:12:16 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>
# include <sstream>
# include <regex.h>

class RPN
{
	public:
		RPN(std::string expression);
		RPN(const RPN &src);
		~RPN();

		RPN &operator=(const RPN &src);
		
		void	exec();

	private:
		std::string _expression;
};

#endif