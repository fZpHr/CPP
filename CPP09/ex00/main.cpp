/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:15:48 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/03 18:45:08 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid argument" << std::endl;
		std::cerr << "Usage: ./btc filename" << std::endl; 
		return (1);
	}
	else
	{
		BitcoinExchange exchange;
		exchange.parseFile(av[1]);
	}
	return (0);
}