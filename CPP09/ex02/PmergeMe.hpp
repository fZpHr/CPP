/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <hbelle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:55:04 by hbelle            #+#    #+#             */
/*   Updated: 2024/05/08 22:21:06 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# ifndef DEBUG
# define DEBUG	0
#endif

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <deque>
#include <iomanip>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();

		void	exec(std::vector<int> *arrayNumbers, int status);
		void	mySort(std::vector<int> *arrayNumbers);
		void	mySort2();
		void	mySort3deque(std::deque<std::deque<int> >::iterator begin, std::deque<std::deque<int> >::iterator end);
		void	mySort3vector(std::vector<std::vector<int> >::iterator begin, std::vector<std::vector<int> >::iterator end);
		void	mySort4();
		void	mySort5();
		static bool __attribute__((unused)) ComparePairsDeque(const std::deque<int>& a, const std::deque<int>& b);
		static bool __attribute__((unused)) ComparePairsVector(const std::vector<int>& a, const std::vector<int>& b);
		void __attribute__((unused)) debugDeque(int status);
		void __attribute__((unused)) debugVector(int status);
		
	private:
		PmergeMe	&operator=(const PmergeMe &src);
		PmergeMe(const PmergeMe &src);
		std::deque<std::deque <int> > _deque;
		std::deque<int> _deque2;
		std::vector<std::vector<int> > _vector;
		std::vector<int> _vector2;
		int	_odd;
		int _status;
};

#endif